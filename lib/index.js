module.exports = {
	/**
	 * The data used for the package's configuration
	 */
	config : require("./config.js"),
	
	/**
	 * The default data for the sbjson grammars
	 */
	sbJsonGrammars : [
		require('./tree-sitter-sbjson.json'),
		require('./text-mate-sbjson.json')
	],

	/**
	 * The list of file types that should be highlighted from the default list
	 */
	defaultFileTypes : null,

	/**
	 * The list of user specified file types that should be highlighted by the package
	 */
	customFileTypes : null,

	/**
	 * The regular json packages provided by atom.
	 */
	normalJsonGrammars : [],
	
	/**
	 * Wether to replace the normal json grammars with the sbjson grammars
	 */
	replaceNormalJson : null,

	/**
	 * A list of disposables that remove the grammars this package adds
	 */
	grammarDisposables : [],

	/**
	 * A list of disposables that should be disposed of during deactivate()
	 */
	subscriptions : [],

	/**
	 * A subscription used to remove the normal json grammars when they are
	 * both loaded. Dispose of it as soon as they are loaded
	 */
	addGrammarSubscription : null,

	/**
	 * Computes the scope name for the sbjson grammars
	 */
	getScopeName() {
		return this.replaceNormalJson ? "source.json" : "source.sbjson";
	},

	/**
	 * Computes the list of file types that will be associated with the
	 * sbjson grammars
	 */
	getFileTypes() {
		let fileTypes = this.defaultFileTypes.concat(this.customFileTypes);
		if (this.replaceNormalJson) {
			this.normalJsonGrammars.forEach((grammar) => {
				grammar.fileTypes.forEach((fileType) => {
					if (fileTypes.indexOf(fileType) == -1) {
						fileTypes.push(fileType);
					}
				}, this);
			}, this);
		}
		return fileTypes;
	},

	/**
	 * checks if the normal json grammars are loaded
	 */
	areNormalJsonGrammarsLoaded() {
		let treeSitterExists = atom.grammars.treeSitterGrammarsById["source.json"] != null;
		let textMateExists = atom.grammars.textmateRegistry.grammarsByScopeName["source.json"] != null;
		return treeSitterExists && textMateExists;
	},
	
	/**
	 * restores the normal json grammars
	 */
	removeNormalJsonGrammars() {
		let doSave = this.normalJsonGrammars.length <= 0;
		let grammar;
		while (grammar = atom.grammars.grammarForId('source.json')) {
			atom.grammars.removeGrammar(grammar);
			if (doSave) {
				this.normalJsonGrammars.push(grammar);
			}
		}
	},
	
	/**
	 * restores the normal json grammars
	 */
	restoreNormalJsonGrammars() {
		while (this.normalJsonGrammars.length > 0) {
			let grammar = this.normalJsonGrammars.shift();
			atom.grammars.addGrammar(grammar);
		}
	},

	/**
	 * notifies atom of the changes made to the sbjson grammars
	 * @param: {string} action - an extra action to be taken (either restore or remove)
	 */
	updateGrammars(action) {
		if (action == "remove") {
			this.removeNormalJsonGrammars();
		}
		// this removes any previously installed
		while (this.grammarDisposables.length > 0) {
			this.grammarDisposables.shift().dispose();
		}

		// load the sbjson grammars back into action
		this.sbJsonGrammars.forEach((grammar) => {
			grammar.name = "Starbound JSON";
			grammar.fileTypes = this.getFileTypes();
			grammar.scopeName = this.getScopeName();
			this.grammarDisposables.push(atom.grammars.addGrammar(atom.grammars.createGrammar(__filename, grammar)))
		});
		
		if (action == "restore") {
			this.restoreNormalJsonGrammars()
		}
	},

	/**
	 * Fired when the replace normal json setting is changed by the user or
	 * initially read by atom.
	 */
	replaceNormalJsonConfigChanged(newValue) {
		if (this.replaceNormalJson === null) {
			// when we are on the first load we do something different
			this.replaceNormalJson = newValue
			if (newValue) {
				// check if the normal json grammars are already loaded
				let x = this.areNormalJsonGrammarsLoaded();
				if (x) {
					this.updateGrammars("remove");
				}
				else {
					this.addGrammarSubscription = atom.grammars.onDidAddGrammar(() => {
						let x = this.areNormalJsonGrammarsLoaded()
						if (x) {
							this.addGrammarSubscription.dispose();
							this.addGrammarSubscription = null;
							this.updateGrammars("remove");
						}
					})
				}
			}
			else {
				this.updateGrammars();
			}
		}
		else if (this.replaceNormalJson != newValue) {
			if (newValue) {
				this.replaceNormalJson = newValue
				// replace normal json with our json
				this.updateGrammars("remove");
			}
			else {
				this.replaceNormalJson = newValue
				// restore the normal json grammars
				this.updateGrammars("restore");
			}
		}
	},

	/**
	 * Fired when the user changes the value of a default supported type
	 * in the package's settings
	 * @param {boolean} newValue - The value to update the default types list with
	 */
	defaultFileTypesUpdated(newValue) {
		let doSave = this.customFileTypes !== null
		this.defaultFileTypes = [];
		for (let fileType in newValue) {
			if (newValue[fileType] == true) {
				this.defaultFileTypes.push(fileType)
			}
		}
		if (doSave) {
			this.updateGrammars()
		}
	},

	/**
	 * Fired when the user changes the value of the custom supported types
	 * in the package's settings
	 * @param {boolean} newValue - The value to update the custom types list with
	 */
	customFileTypesUpdated(newValue) {
		let doSave = this.customFileTypes !== null
		if (newValue) {
			this.customFileTypes = newValue
				//extentions don't do spaces
				.replace(/\s+/g,"")
				// split on comma
				.split(",")
				// get rid of the dot
				.map(x => x.startsWith(".") ? x.substr(1) : x)
				// remove empty and nulls
				.filter(x => x != "" && x != null);
		}
		else {
			this.customFileTypes = [];
		}
		if (doSave) {
			this.updateGrammars()
		}
	},

	/**
	 * Fired when the package is activated
	 */
	activate() {
		this.subscriptions.push(atom.config.observe('starbound-language-json.defaultTypes', this.defaultFileTypesUpdated.bind(this)))
		this.subscriptions.push(atom.config.observe('starbound-language-json.customTypes', this.customFileTypesUpdated.bind(this)))
		this.subscriptions.push(atom.config.observe('starbound-language-json.replaceNormalJson', this.replaceNormalJsonConfigChanged.bind(this)))
	},

	/**
	 * Fired when the package gets deactivated
	 */
	deactivate() {
		if (this.addGrammarSubscription != null) {
			this.addGrammarSubscription.dispose();
			this.addGrammarSubscription = null;
		}
		if (this.grammarDisposables != null) {
			for (let disposable of this.grammarDisposables) {
				disposable.dispose();
			}
		}
		if (this.subscriptions != null) {
			for (let disposable of this.subscriptions) {
				disposable.dispose();
			}
		}
		if (this.replaceNormalJson == true) {
			this.restoreNormalJsonGrammars();
		}
	}
}
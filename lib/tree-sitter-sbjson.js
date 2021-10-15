const path = require('path');
const _atom = require('atom');

try {
	module.exports = require("../build/Release/tree_sitter_sbjson_binding");
}
catch (error) {
	atom.notifications.addWarning("**starbound-language-json**\n\nTree-Sitter binary could not be loaded. This is likely due to a node binary version match issue. Rebuilding the binary. please wait.")
	var spawnedProcess = new _atom.BufferedProcess({
		command: atom.packages.getApmPath(),
		args: ['install', '--production', '--color', 'false'],
		options: {
			cwd: path.join(__dirname,'..'),
			timeout: 10000
		},
		stdout: (chunk) => { console.log('starbound-language-json|rebuild-tree-sitter-binaries|stdout', chunk); },
		stderr: (chunk) => { console.error('starbound-language-json|rebuild-tree-sitter-binaries|stderr', chunk); },
		exit: () => {
			atom.notifications.addSuccess("**starbound-language-json**\n\nThe tree-sitter binary was rebuilt. You will need to restart atom in order for the code-coloring to work.", {
				dismissable: true,
				buttons: [
					{text: "Restart atom", onDidClick: () => {atom.reload();}},
					{text: "ignore"}
				]
			})
		},
		autoStart: true
	});
}

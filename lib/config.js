let config = require('./config.json')
let fileTypes = require('./file-types.json')

fileTypes.forEach((fileType) => {
	config.defaultTypes.properties[fileType] = {
		title : "." + fileType,
		type : "boolean",
		default : true
	}
});

module.exports = config;
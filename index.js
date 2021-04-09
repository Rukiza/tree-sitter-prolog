try {
  module.exports = require('node-gyp-build')(__dirname);
} catch (error) {
  try {
      module.exports = require('node-gyp-build')(__dirname);
  } catch (_) {
      throw error
  }
}

try {
  module.exports.nodeTypeInfo = require("./src/node-types.json");
} catch (_) {}

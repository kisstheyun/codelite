
/**
 * @brief The Error constructor creates an error object. Instances of Error objects are thrown when runtime errors occur. The Error object can also be used as a base objects for user-defined exceptions. See below for standard built-in error types.
 * @link https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Error
 */
function Error() {

	/**
	 * @brief The columnNumber property contains the column number in the line of the file that raised this error.
	 * @link https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Error/columnNumber
	 */
	this.columnNumber = '';

	/**
	 * @brief The fileName property contains the path to the file that raised this error.
	 * @link https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Error/fileName
	 */
	this.fileName = '';

	/**
	 * @brief The lineNumber property contains the line number in the file that raised this error.
	 * @link https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Error/lineNumber
	 */
	this.lineNumber = '';

	/**
	 * @brief The message property is a human-readable description of the error.
	 * @link https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Error/message
	 */
	this.message = '';

	/**
	 * @brief The non-standard stack property of Error objects offer a trace of which functions were called, in what order, from which line and file, and with what arguments. The stack string proceeds from the most recent calls to earlier ones, leading back to the original global scope call.
	 * @link https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Error/name
	 */
	this.stack = '';

}

/**
 * @brief The toSource() method returns code that could eval to the same error.
 * @link https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Error/toSource
 */
Error.prototype.toSource = function() {};

/**
 * @brief The toString() method returns a string representing the specified Error object.
 * @link https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Error/toString
 */
Error.prototype.toString = function() {};

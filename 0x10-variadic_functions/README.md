How Variadic Functions are Defined and Used
Defining and using a variadic function involves three steps:

Define the function as variadic, using an ellipsis (‘…’) in the argument list, and using special macros to access the variable arguments. See Receiving the Argument Values.
Declare the function as variadic, using a prototype with an ellipsis (‘…’), in all the files which call it. See Syntax for Variable Arguments.
Call the function by writing the fixed arguments followed by the additional variable arguments. See Calling Variadic Functions.


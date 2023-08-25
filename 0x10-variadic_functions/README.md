# C - Variadic functions
Variadic functions are functions that take variable numbers or types of arguments. Hence the name variadic (varargs) functions.
## Defining and using variadic functions: 3 steps
1. Define the function as a variadic, using an ellipsis('...')in the argument list,
```C
return_type fun_name(const char *a, int b, ...)
{
    ...
}
```
2. Declare the functions as varadic, using a prototype with an ellipsis('...'), in all files which call it. A function that accepts a variable number of arguments must be declared with a prototype that says so.
*_ The Syntax of ISO requires at least one fixed argument before the "..." _*
3. Call the function by writing the fixed arguments followed by the additional variable arguments.

## stdarg.h
stdarg.h is a header in the C standard library of the C programming language that allows functions to accept an indefinite number of arguments.
### stdarg.h types
**va_list**: type for iteratinf arguments
### stdarg.h macros
**va_start**: start iterating with a *va_list*
**va_arg**: Retrieve an argument
**va_end**: free a *va_list*
**va_copy**: copy contents of one of *va_list* to another
## Accessing the arguments
To access the unnamed arguments,
- Declare a variable of type *va_list* in the variadic function.
- The macro *va_start* is called with two arguments: the *va_list* variable and the name of the last named parameter of the function.
- After this, each invocation of the *va_arg* macro yields the next argument. The first argument to the *va_arg* is the *va_list* and the second is the type of the next arguments passed to the function.
- Finally the *va_end* macro must be called on the *va_list* before the fuction returns.

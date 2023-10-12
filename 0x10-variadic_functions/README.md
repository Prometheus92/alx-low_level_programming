# 0x10. C - Variadic functions
*Variadic functions or varargs functions* are functions that take a variable number or type of arguments. And since the C language itself doesn't provide a mechanism for such kinds of functions to access their non-required arguments, we have to use the variable arguments macros defined in `stdarg.h`.

## Why use vaiadic functions?
They are very useful in situations where a function needs to handle operations that can meaningfully accept an unlimited number of arguments. Examples include:
- `printf()`
- whiel working withm `malloc()`


## How variadic Functions are Defined and Used
It include __3 steps__:
 - Define the fuction i.e. `fun_name(arg1, ...)`
 - Declare the function as variadic..
 - Call the function 

## Receiving the Argument Values(How can we access '...'?)
The only way to access them(variable arguments) is sequentially, in the order they were written and we must use a special macros from `stdarg.h` using the follwoing 3 steps:
 - Initialize an argument pointer of the vaiable of type `va_list` using `va_start`.
 - Access the optional arguments by successive calls to `va_arg`.(i.e. the first call to `va_arg` gives you the first opeional element and so on...)
 - After accessing the needed amount of arguments, Indicate that you are finished wiht the argument pointer variable by calling `va_end(__)`
__*Example*__:
 ```C
#include <stdarg.h>
#include <stdio.h>

int AddNumbers (int n, ...) {
    int Sum = 0;
    va_list ptr;
    va_start(ptr, n);
    for (int i = 0; i < n; i++)
        Sum += va_arg(ptr, int);
    va_end(ptr);
    return Sum;
}

int main () {
    printf("\\n\\n Variadic functions: \\n");
    printf("\\n 1 + 2 = %d ", AddNumbers (2, 1, 2));
    printf("\\n 3 + 4 + 5 = %d ", AddNumbers (3, 3, 4, 5));
    printf("\\n 6 + 7 + 8 + 9 = %d ", AddNumbers (4, 6, 7, 8, 9));
    printf("\\n");
    return 0;
}
```
output:
```C
Variadic functions:
1 + 2 = 3
3 + 4 + 5 = 12
6 + 7 + 8 + 9 = 30
```

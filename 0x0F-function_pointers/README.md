# C - Function pointers
Similarly to arrays, funtions decay to pointers when their names are used.
If one wants the address of a function(say 'foo') they can achieve that through
```C - Syntax
foo
&foo
```
Declaring pointer to functions
```C - Syntax
type (*function_name)(parameters)
```
The above syntax defines a pointer to a function named 'function_name' that which accepts the following parameters and returns the specified 'type'

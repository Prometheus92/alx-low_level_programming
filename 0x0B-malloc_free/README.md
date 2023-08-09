# 0x0B. C-malloc, free
## Automatic and dynamic allocation, malloc and free

C is a *_strucutred_* language, meaninng it has some fixed rules for programming. one of them includes changing the size of an array.

An **Array** is a collection of items stored at a *_contiguous_* memory locations.

*__Automatic Memory Allocation__* is when you declare variables or use strings within double quotes, the program is taking care of all the memory allocation and release.

*__Dynamic Memory Allocation__* is a procedure in which the size of a data structure(eg. array) is changed during the runtime. C language provides some functions to achieve these tasks.

There are 4 library functions provided by C defined under `<stdlib.h>` header file to facilitate dynamic memory allocation in c programming. They are:
- `malloc()`
- `calloc()`
- `free()`
- `realloc()`

**`malloc` function or memory allocation**

The `malloc` function is used to allocate a certain amount of memory during the execution of a program. 

`maalloc` function allocates a specific number of bytes in memory and returns a pointer to the allocated memory. This memory will have read and write permissions.

- Prototype: `void *malloc(size_t size);`
- Return: `void *` means it is a pointer to the type of your choice
- `size` : is the number of bytes you need to allocate.

##### Syntax of malloc()
`ptr = (type*) malloc(byte-size);`

Contrary to local variables and function parameters, the memory that is allocated with `malloc` is not automatically released when the function returns.

When we are using `malloc`, we need to handel memory ourselves.

- need to keep track of all the addresses of the allocated memory( in a variable of type pointer)
- need to **Deallocate** every memory space we previously allocated.( if these isn't done program may run out of memory and OS may kill the program).


**`calloc` function or contiguous allocation**

The `calloc()` is used to dynamically allocate the specified number of blocks of memory of the specified type. Similar to `malloc()` except in two ways and these are:

- It initializes each block with a default value '0'
- It has two parameters or arguments as compared to `malloc()`

##### Syntax of calloc()
`ptr = (type*)calloc(n, element-size);`

where: n is the number of elements
element-size is the size of each element.


**`free` function**

The `free` function frees the memory space which have been allocated by a previous call to `malloc`, `calloc` or `realloc`

- Prototype: `void free(void *ptr);`
- where `ptr` is the address of the memory space previously allocated by and returned by a call to `malloc` or other similar functions.
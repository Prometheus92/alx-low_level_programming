# 0x0B. C - malloc, free
## Memory Allocation
Two types of memory allocation
- Automatic allocation - When the program takes care of the memory allocation
- Dynamic allocation - Using malloc, calloc, realloc and free funcions
### Malloc
The `malloc` fucntion allocates a specific number of bytes in memory(heap) and returns a pointer to the allocated memory.The memory will have read and write permission.

prototype: `void *malloc(size_t size)`

#### Always don't forgate to check for Null Saftey!!
__*Malloc May return Null*__: During dynamic memory allocation the `malloc` function request a block of memory form the heap if the request is granted memory is allocated if not null is returned.

__Memory allocated with `malloc` is not automatically released when the function returns.__
### Free
When working with malloc(dynamically allocated memory) we have to handle memory our selves.
- Keep track of all the addresses of the allocated memory(in a variable of type pointer)
- And deallocate every memory space that is dynamatically allocated. If we don't do this the program may ran out of memory and the OS kill the program.

#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: size of memory to be allocated
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}

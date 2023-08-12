#include "main.h"
#include <stdlib.h>
/**
 * _initialize - initializes the memory with value zero
 * @m: memory location
 * @n: number of elements
 *
 * Return: string(initialized array)
 */
char *_initialize(char *m, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		m[i] = 0;
	return (m);
}

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	_initialize(arr, (nmemb * size));
	return (arr);
}

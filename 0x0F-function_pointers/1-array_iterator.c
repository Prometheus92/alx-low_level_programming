#include "function_pointers.h"
/**
 * array_iterator - function that executes a function given as a parameter
 * on each element of an array
 * @size: size of the array
 * @array: array of integers
 * @action: a pointer to the function you need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size <= 0 || !action || !array)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}

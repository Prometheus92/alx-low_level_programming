#include "function_pointers.h"
/**
 * int_index - fuction that searches for an integer
 * @array: array of integers
 * @size: size of the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: the first element for which cmp function does not return 0
 * if no element matched, return -1
 * if size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
			return (i);
	}
	return (-1);
}

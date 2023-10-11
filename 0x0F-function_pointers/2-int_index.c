#include "function_pointers.h"
/**
 * int_index - function that search for an integer
 * @size: is the number of elements in the array
 * @cmp: is a pointer to the function to be used to compare values
 * @array: array of integers
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}

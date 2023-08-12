#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the newly created arrat
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, tmp;

	if (min > max)
		return (NULL);
	arr = malloc((max - min + 1) * sizeof(int));

	if (arr == NULL)
		return (NULL);
	for (i = 0; i <= (max - min); i++, tmp++)
		arr[i] = tmp;
	return (arr);
}

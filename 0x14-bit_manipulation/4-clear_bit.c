#include "main.h"

/**
 * clear_bit - set the bit value to 0 at the specified index
 * @n: the decimal representation of the number
 * @index: the position of the bit to be changed
 * Return: 1 if success else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index >= 64)
		return (-1);
	i = ~(1 << index);
	*n = (*n & i);
	return (1);
}

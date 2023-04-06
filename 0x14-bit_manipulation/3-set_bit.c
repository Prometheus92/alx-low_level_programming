#include "main.h"
/**
 * set_bit - modify the value of the bit at the specified index
 * @n: pointer of the integer // passing by reference
 * @index: location of the bit to be modified
 * Return: 1 if sucess else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index >= 64)
		return (-1);
	i = 1 << index;
	*n = (*n | i);
	return (1);
}

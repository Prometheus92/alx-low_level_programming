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
	unsigned long int t = *n;

	for (i = 0; i < 64; i++)
	{
		if (index == i)
		{
			*n += (1 << index);
			if (*n != t)
				return (0);
		}
	}
	return (-1);
}

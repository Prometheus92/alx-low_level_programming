#include "main.h"
#include <stdlib.h>
/**
 * get_bit - returns the bit value at the specified index
 * @n: integer value
 * @index: the specified index// from right to left
 * Return: the value of the bit 0 or 1; if error occurs -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
		return (0);
	for (i = 0; i < 64; n >>= 1, i++)
	{
		if (index == i)
			return (n & 1);
	}
	return (-1);
}

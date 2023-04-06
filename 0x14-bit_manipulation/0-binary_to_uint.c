#include "main.h"

/**
 * binary_to_uint - converts a binary to unsigned int;
 * @b: array of bits
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	unsigned int i, index = 0;

	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		index++;
	}
	/**
	 * Index needs to be reduced by one since we don't consider '\0' element
	 */
	index -= 1;
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
			num += (1 << index);
		index--;
	}
	return (num);

}

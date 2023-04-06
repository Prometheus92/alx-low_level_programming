#include "main.h"
/**
 * flip_bits - returns the number of bits needed to be flipped inorder
 * to get one number from another.
 * @n: number to be driven from
 * @m: number to be derived.
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, num_of_bit = 0;
	unsigned long int tmp;

	if (n == m)
		return (0);
	tmp = n ^ m;
	for (i = 0; i < 64; i++)
	{
		if (tmp & 1)
			num_of_bit++;
		tmp >>= 1;
	}
	return (num_of_bit);
}

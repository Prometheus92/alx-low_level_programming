#include "main.h"
/**
 * is_prime - checks if the number is divisible by other numbers
 * @n: number to be checked
 * @i: divider
 *
 * Return: 1 if true else 0
 */
int is_prime(int n, int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		else
			return (0);
	}
	return (is_prime(n, i + 1));
}
/**
 * is_prime_number - checks whether or not a number is prime
 * @n: integer number to be checked
 *
 * Return: returns 1 if true else 0
 */
int is_prime_number(int n)
{
	if (n == 0 || n < 0 || n == 1)
		return (0);
	return (is_prime(n, 2));
}


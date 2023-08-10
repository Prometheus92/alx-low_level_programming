#include "main.h"
/**
 * _sqrt - returns the natural sqare root of a number
 * @r: index
 * @n: integer number
 *
 * Return: square root int
 */
int _sqrt(int n, int r)
{
	if (r % (n / r) == 0)
		return (r);
	return (_sqrt(n, r + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt(n, 2));
}

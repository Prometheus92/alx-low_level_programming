#include "variadic_functions.h"
/**
 * sum_them_all - sums all the parameters
 * @n: integer
 * Return: the sum of all parameterrs
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(ptr, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ptr, int);

	va_end(ptr);
	return (sum);
}

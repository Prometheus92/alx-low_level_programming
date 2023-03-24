#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all of its parameters.
 * @n: number of the parameters.
 *
 * Return: sum of its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list parameter_list;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(parameter_list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(parameter_list, int);

	va_end(parameter_list);

	return (sum);
}

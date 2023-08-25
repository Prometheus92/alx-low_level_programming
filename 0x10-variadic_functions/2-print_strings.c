#include "variadic_functions.h"
#include <stdio.h>
/**
 * r_str - returns string
 * @str: sting passed to it
 *
 * Return: returns string
 */
char *r_str(char *str)
{
	if (str == NULL)
		return ("(nil)");
	return (str);
}
/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: the number of strings passed to the function
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL || i == n - 1)
			printf("%s", r_str(va_arg(ptr, char *)));
		else
			printf("%s%s", r_str(va_arg(ptr, char *)), separator);
	}
	printf("\n");
	va_end(ptr);
}

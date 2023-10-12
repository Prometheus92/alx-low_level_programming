#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, follwed by a new line
 * @separator: the string to be printed between the strings
 * @n: the bumber of strings passed to the function
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;
	char *tmp;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		tmp = va_arg(ptr, char *);
		printf("%s", tmp != NULL ? tmp : "(nil)");
		if (separator != NULL && (i + 1) != n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}

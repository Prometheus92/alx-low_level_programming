#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers followed by a new line
 * @separator: the string to be printed between the numbers
 * @n: the number of arguments
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ptr, int));
		if (separator != NULL && (i + 1) != n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}

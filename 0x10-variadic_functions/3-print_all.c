#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	va_list ptr;
	unsigned int i = 0, j, c = 0;
	char *str;
	const char f_list[] = "cifs";

	va_start(ptr, format);
	while (format && format[i])
	{
		j = 0;
		while (f_list[j])
		{
			if (format[i] == f_list[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(ptr, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(ptr, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(ptr, double)), c = 1;
			break;
		case 's':
			str = va_arg(ptr, char *), c = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} i++;
	}
	printf("\n"), va_end(ptr);
}

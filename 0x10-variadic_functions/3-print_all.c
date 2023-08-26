#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	va_list ptr;
	unsigned int i = 0, j, flag = 0;
	char *str;
	const char c_format[] = "cifs";

	va_start(ptr, format);
	while (format && format[i])
	{
		j = 0;
		while (c_format[j])
		{
			if (format[i] == c_format[j] && flag)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(ptr, int)), flag = 1;
			break;
		case 'i':
			printf("%d", va_arg(ptr, int)), flag = 1;
			break;
		case 'f':
			printf("%f", va_arg(ptr, double)), flag = 1;
			break;
		case 's':
			str = va_arg(ptr, char *), flag = 1;
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

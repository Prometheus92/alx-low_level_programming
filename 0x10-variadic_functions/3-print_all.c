#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list ptr;
	char *str;
	int i = 0;

	va_start(ptr, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 's':
				str = va_arg(ptr, char *);

				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
			case 'i':
				printf("%d", va_arg(ptr, int));
				break;
			case 'f':
				printf("%f", va_arg(ptr, double));
				break;
			case 'c':
				printf("%c", va_arg(ptr, int));
				break;
			default:
				break;
		}
		if (format[i + 1] == 's' || format[i + 1] == 'i' || format[i + 1] == 'f' ||
				format[i + 1] == 'c')
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(ptr);
}

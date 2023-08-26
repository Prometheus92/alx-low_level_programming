#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list ptr;
	char *str;
	int i = 0, j = 0;
	const char c_format[] = "cifs";

	va_start(ptr, format);
	while (format && format[i])
	{
		j = 0;
		while (c_format[j])
		{
			if ((c_format[j] == format[i + 1]) && format[i + 1])
			{
				printf(", ");
				break;
			} j++;
		} switch (format[i])
		{
			case 's':
				str = va_arg(ptr, char *);
				if (!str)
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
		} i++;
	} printf("\n"), va_end(ptr);
}

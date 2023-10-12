#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i;
	char *str;
	va_list ptr;

	va_start(ptr, format);
	i = 0;
	while (format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(ptr, int));
			break;
		case 'i':
			printf("%d", va_arg(ptr, int));
			break;
		case 'f':
			printf("%f", va_arg(ptr, double));
			break;
		case 's':
			str = va_arg(ptr, char *);
			if (str == NULL)
				printf("(nil)");
			if (str != NULL)
				printf("%s", str);
			break;
		default:
			break;
		}
		i++;
	}
	printf("\n");
	va_end(ptr);
}

#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer to char or simply it is a string
 *
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*(s + 1) != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);

	}
	else
	{
		_putchar(*s);
	}
}

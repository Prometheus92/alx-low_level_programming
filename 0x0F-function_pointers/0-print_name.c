#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: string i.e name
 * @f: function pointer
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}

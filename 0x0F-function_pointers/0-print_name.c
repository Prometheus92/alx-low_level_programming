#include "main.h"
/**
 * print_name - Prints a name
 * @name: name
 * @f: pointer to a function
 */
void print_name(char *name, int void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}

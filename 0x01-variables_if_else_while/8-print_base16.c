#include <stdio.h>

/**
 * main - main - block
 * Description: prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 * Return:0
 */
int main(void)
{
	int i, x;

	for (i = 0; i < 10; i++)
	{
		putchar (i + '0');
	}
	for (x = 'a'; x <= 'f'; x++)
	{
		putchar (x);
	}

putchar('\n');
return (0);
}

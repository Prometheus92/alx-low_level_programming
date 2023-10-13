#include "3-calc.h"
/**
 * main - entry point
 * @argc: number of command line arguments
 * @argv: pointer
 * Return: int
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	char c;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	f = get_op_func(argv[2]);

	if (!f)
	{
		printf("Error\n");
		exit(99);
	}

	c = *argv[2];
	if ((c == '/' || c == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = f(a, b);
	printf("%d\n", result);

	return (0);
}

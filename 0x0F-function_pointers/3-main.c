#include "3-calc.h"
/**
 * main - entry point
 * @argc: number of command line arguments
 * @argv: pointer
 * Return: int
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Too much arguments\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	f = get_op_func(argv[2]);

	if (!f)
	{
		printf("function not found\n");
		exit(99);
	}

	printf("%d\n", f(a, b));

	return (0);
}

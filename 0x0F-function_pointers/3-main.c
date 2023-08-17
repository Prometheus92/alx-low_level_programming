#include "3-calc.h"
/**
 * main - entry point
 * @argc: number of inline arguments
 * @argv: array of inline arguments
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", (*func)(a, b));
	return (0);
}

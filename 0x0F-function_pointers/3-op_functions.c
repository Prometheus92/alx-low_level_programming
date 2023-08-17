#include "3-calc.h"
/**
 * op_add - returns the sum of two integers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns the subtraction of two integers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: subtraction of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - performs multiplication on two integers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - performs division on two integers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: division of a and b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("ERROR\n");
		exit(98);
	}
	return (a / b);
}
/**
 * op_mod - performs modulus on two integers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: mod of a and b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(98);
	}
	return (a % b);
}

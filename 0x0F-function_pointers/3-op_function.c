#include "3-calc.h"

/**
 * op_add - returns the sum of the number
 * @a: first integer
 * @b: second integer
 * Return: int
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the sumtraction of two numbers
 * @a: first integer
 * @b: second integer
 * Return: returns int
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the multiplication of two number
 * @a: first integer
 * @b: second integer
 * Return: int
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the division of two numbers
 * @a: first number
 * @b: second number
 * Return: int
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(2);
	}
	return (a / b);
}

/**
 * op_mod - returns the modulo of two numbers
 * @a: first number
 * @b: second number
 * Return: int
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(2);
	}
	return (a % b);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Description: Get a random number and check its last digit, compare it with 5
 * Return: 0
 */
int main(void)
{
	int n;
	int num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	num = n % 10;

	if (num > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, num);
	else if (num == 0)
		printf("Last digit of %i is %i and is 0\n", n, num);
	else if (num < 6)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, num);

	return (0);
}

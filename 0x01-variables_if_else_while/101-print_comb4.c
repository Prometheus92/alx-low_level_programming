#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all possible
 * different combinations of two digits
 * Numbers must be separated by ',', followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order, with two digits
 * Return: 0
 */
int main(void)
{
int c;
int a;
int x = 0;

while (x < 10)
{
a = 0;
while (a < 10)
{
c = 0;
while (c < 10)
{
if (c != a && a != x && x < a && a < c)
{
putchar('0' + x);
putchar('0' + a);
putchar('0' + c);

if (c + a + x != 9 + 8 + 7)
{
putchar(',');
putchar(' ');
}
}

c++;
}
a++;
}
x++;
}
putchar('\n');
return (0);
}

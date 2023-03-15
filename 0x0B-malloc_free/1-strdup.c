#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of characters
 */
char *_strdup(char *str)
{
	char *strcpy;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;
	strcpy = (char *)malloc(sizeof(char) * (i + 1));

	if (strcpy == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		strcpy[j] = str[j];
	return (strcpy);
}

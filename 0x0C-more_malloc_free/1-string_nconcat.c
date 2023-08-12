#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of chars to be concatenated form the second string
 *
 * Return: pointer to a newly allocated space in memory, which contains s1,
 * followed by the first n bytes of s2 and a null terminated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i, j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (n > j)
		n = j;
	concat = malloc(i + n + 1);
	if (concat == NULL)
		return (NULL);
	for (k = 0; k < (i + n); k++)
	{
		if (k >= i)
			concat[k] = s2[k - i];
		else
			concat[k] = s1[k];
	}
	concat[k] = '\0';
	return (concat);
}

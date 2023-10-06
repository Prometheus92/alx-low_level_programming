#include "main.h"

/**
 * _strlen - funtion that returns the string length
 * @str: a string
 * Return: the length of the string
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}
/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: the size of the newly allocated memory
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len_s1 = _strlen(s1);
	unsigned int len_s2 = _strlen(s2);
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n >= len_s2)
		n = len_s2;

	str = malloc(len_s1 + n + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < len_s1; i++)
		str[i] = s1[i];
	for (; i < (len_s1 + n); i++)
		str[i] = s2[i - len_s1];
	str[i] = '\0';
	return (str);
}

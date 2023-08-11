#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: a string
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * is_palindrome - checks if a string is a palindrome or not
 * @s: a string
 *
 * Return: 1 if string is palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	if (_strlen_recursion(s) <= 1)
		return (1);
	else if (*s == *(s + _strlen_recursion(s) - 1))
		return (is_palindrome(s + 1));
	else
		return (0);
}

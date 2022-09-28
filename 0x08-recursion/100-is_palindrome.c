#include "main.h"
#include <stdio.h>

int _strlen_recursion(char *s);
int rev_string(char *s, int len);

/**
 * _strlen_recursion - Entry point
 * Description - function that returns 1 if a string is a palindrome
 * and 0 if not
 * @s: string input
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);

	return (_strlen_recursion(s + 1) + 1);
}

/**
 * is_palindrome - Entry point
 * Description - function that checks if input is a palindrome
 * @s: string input
 * Return: 1 if string is palindrome, 0 if otherwise
 */

int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len <= 1)
		return (1);

	return (rev_string(s, len));
}

/**
 * rev_string - Entry point
 * Description - function with reversed string
 * @s: string input
 * @len: length of string
 * Return: reversed string
 */

int rev_string(char *s, int len)
{
	if (len <= 1)
		return (1);
	else if (*s == *(s + len - 1))
	{
		return (rev_string(s + 1, len - 2));
	}
	else
		return (0);
}

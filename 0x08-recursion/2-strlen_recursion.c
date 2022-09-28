#include "main.h"

/**
 * _strlen_recursion - Entry point
 * Description - function that returns the length of a string
 * @s: string input
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

#include "main.h"
#include <stdio.h>

/**
 * _strchr - Entry point
 * Description - function that locates a character in a string
 * @s: input string
 * @c: input string
 * Return: ointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return(NULL);
}

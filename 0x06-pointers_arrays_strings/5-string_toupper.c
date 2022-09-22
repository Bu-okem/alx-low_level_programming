#include "main.h"

/**
 * string_toupper - Entry point
 * Description - function that changes all lowercase letters of a
 * string to uppercase
 * @s: string input
 * Return: pointer to uppercase string
 */

char *string_toupper(char *s)
{
	char *start = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}

	return(start);
}

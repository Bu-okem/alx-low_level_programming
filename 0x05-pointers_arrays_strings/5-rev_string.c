#include "main.h"

/**
 * rev_string - Entry point
 * Description - function that reverses a string
 * @s: string input
 * Return: Nothing
 */

void rev_string(char *s)
{
	int len = 0, a = 0;
	char b;

	while (s[len] != '\0')
		len++;

	while (a < len--)
	{
		b = s[a];
		s[a++] = s[len];
		s[len] = b;
	}
}

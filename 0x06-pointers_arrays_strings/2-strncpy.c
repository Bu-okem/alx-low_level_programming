#include "main.h"

/**
 * _strncpy - Entry point
 * Description - function that copies a string
 * @dest: string input
 * @src: string input
 * @n: integer input
 * Return: pointer to resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	srclen++;

	if (n > srclen)
		n = srclen;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	return (temp);
}

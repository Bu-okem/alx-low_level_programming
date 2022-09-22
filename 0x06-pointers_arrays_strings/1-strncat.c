#include "main.h"

/**
 * _strncat - Entry point
 * Description - function that concatenates two strings
 * @dest: string input
 * @src: string input
 * @n: integer input
 * Return: pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	while (*dest)
		dest++;

	if (n > srclen)
		n = srclen;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}

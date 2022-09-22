#include "main.h"

/**
 * _strcat - Entry point
 * Description - function that concatenates two strings
 * @dest: string input
 * @src: string input
 * Return: pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}

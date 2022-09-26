#include "main.h"

/**
 * _memcpy - Entry point
 * Description - function that copies memory area
 * @dest: memory area destination to copy
 * @src: memory area source to copy from
 * @n: number of bytes
 * Returns a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *a = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (a);
}

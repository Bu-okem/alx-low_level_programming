#include "main.h"

/** _strspn - Entry point
 * Description - function that gets the length of a prefix substring
 * @s: input string
 * @accept: input character
 * Return: number of bytes in the initial segment of s which consist
 * only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int count = 0, flag;
	char *start = accept;

	while (*s)
	{
		flag = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				count++;
				flag = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = start;
		if (flag == 0)
			break;
	}
	return (count);
}

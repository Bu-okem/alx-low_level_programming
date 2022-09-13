#include "main.h"

/**
 * _isalpha - Entry point
 * Description - function that checks for alphabetic character
 * @c: Input
 * Return: 1 if is alphabet, 0 if otherwise
 */

int _isalpha(int c)
{
	char lower, upper;
	int isalpha = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				isalpha = 1;
		}
	}

	return (isalpha);
}

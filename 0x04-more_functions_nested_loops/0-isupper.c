#include "main.h"

/**
 * _isupper - Entry point
 * Description - function that checks for uppercase character
 * @c: input
 * Return: 1 if c is uppercase or 0 otherwise
 */

int _isupper(int c)
{
	char upper = "A";

	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}

	return (isupper);
}

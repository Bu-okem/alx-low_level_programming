#include "main.h"

/**
 * _isdigit - Entry point
 * Description - function that checks for a digit (0 through 9)
 * @d: input
 * Return: 1 if c is a digit or 0 otherwise
 */

int _isdigit(int d)
{
	char c = '0';

	int isdigit = 0;

	for (; c <= '9'; c++)
	{
		if (c == d)
		{
			isdigit = 1;
			break;
		}
	}

	return (isdigit);
}

#include "main.h"

/**
 * _islower - Entyr point
 * Description - function that checks for lowercase character
 * Return: 1 if is lowercase, 0 if is uppercase
 */

int _islower(int c)
{
	char alpha;
	int lower = 0;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == c)
			lower = 1;
	}

	return (lower);
}

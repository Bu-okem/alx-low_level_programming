#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description - function that prints 10 times the alphabet, in lowercase,
 * followed by a new line
 * Return: Nothing
 */

void print_alphabet_x10(void)
{
	char alpha;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (alpha  = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);
		_putchar('\n');
	}
}

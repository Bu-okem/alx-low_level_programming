#include "main.h"

/**
 * print_diagonal - Entry point
 * Description - function that draws a diagonal line on the terminal
 * @n: input
 * Return; Nothing
 */

void print_diagonal(int n)
{
	int a = 0, b;

	if (n > 0)
	{
		for (; a < n; a++)
		{
			for (b = 0; b < a; b++)
				_putchar(' ');

			_putchar('\n');

		}
	}

	else
		_putchar('\n');
}

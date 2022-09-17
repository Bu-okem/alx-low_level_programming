#include "main.h"

/**
 * print_line - Entry point
 * Description - function that draws a straight line in the terminal
 * @l: input
 * Return: Nothing
 */

void print_line(int l)
{
	int i = 0;

	if (l > 0)
	{
		for (; i < l; i++)
		{
			_putchar('_');
		}
	}

	_putchar('\n');
}

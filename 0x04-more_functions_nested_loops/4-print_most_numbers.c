#include "main.h"

/**
 * print_most_numbers - Entry point
 * Description - prints the numbers, from 0 to 9, except 2 and 4,
 * followed by a new line
 * Return: Nothing
 */

void print_most_numbers(void)
{
	int n = '0';

	for (; n <= '9'; n++)
	{
		if (n != '2' && n != '4')
			_putchar(i);
	}
	_putchar('\n');
}

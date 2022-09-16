#include "main.h"

/**
 * print-numbers - Entry point
 * Description - function that prints the numbers, from 0 to 9,
 * followed by a new line
 * Return: Nothing
 */

void print_numbers(void)
{
	int n = '0';

	for (; n <= '9'; n++)
		_putchar(n);
	_putchar('\n');
}

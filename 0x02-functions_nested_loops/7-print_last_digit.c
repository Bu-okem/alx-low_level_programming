#include "main.h"

/**
 * print_last_digit - Entry point
 * Description - function that prints the last digit of a number
 * @c: Input
 * Return: last digit of input
 */

int print_last_digit(int c)
{
	int n;

	if (c < 0)
		n = -1 * (c % 10);
	else
		n = c % 10;

	_putchar((n % 10) + '0');
	return (n % 10);
}

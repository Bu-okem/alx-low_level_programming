#include "main.h"

/**
 * print_sign - Entry point
 * Description - function that prints the sign of a number
 * @c: Input
 * Return: 1 if the number is positive, 0 if the number is zero,
 * -1 if the number is negative
 */

int print_sign(int c)
{
	int sign_value;

	if (c > 0)
	{
		sign_value = 1;
		_putchar('+');
	}
	else if (c == 0)
	{
		sign_value = 0;
		_putchar('0');
	}
	else
	{
		sign_value = -1;
		_putchar('-');
	}

	return (sign_value);
}

#include "main.h"

/**
 * print_times_table - Entry point
 * Description - function that prints the n times table, starting with 0
 * @n: input
 * Return: Nothing
 */

void print_times_table(int n)
{
	int a, b;

	if (n > 0 && n < 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('0');
			for (b = 1; b <= n; b++)
				putformat(a * b);
			_putchar('\n');
		}
	}
}

/**
 * putformat - Entry point
 * Description - function to format output
 * @n: input
 * Return: Nothing
 */

void puformat(int n)
{
	if (n <= 9)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(n + '0');
	}
	else if (n > 9 && n <= 99)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else
	{
		_putchar(',');
		_putchar(' ');
		_putchar(n / 100 + '0');
		_putchar(n / 10 % 10 + '0');
		_putchar(n % 10 + '0');
	}
}

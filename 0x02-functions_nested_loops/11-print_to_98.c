#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Entry point
 * Description - function that prints all natural numbers from n to 98,
 * followed by a new line
 * @c: input
 * Return: Nothing
 */

void print_to_98(int c)
{
	if (c <= 98)
	{
		for (; c <= 98; c++)
		{
			printf("%d", c);

			if (c == 98)
				continue;
			printf(', ');
		}

		printf('\n');

	}
	else
	{
		for (; c <= 98; c--)
		{
			printf("%d", c);

			if (c == 98)
				continue;
			
			printf('\n');
		}

		printf('\n');
	}
}

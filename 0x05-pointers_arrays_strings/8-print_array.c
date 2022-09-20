#include "main.h"
#include <stdio.h>

/**
 * print_array - Entry point
 * Description - function that prints n elements of an array of integers,
 * followed by a new line
 * @a: array input
 * @n: integer input
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');
}

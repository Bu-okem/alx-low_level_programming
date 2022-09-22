#include "main.h"

/**
 * reverse_array - Entry point
 * Description - function that reverses the content of an array of integers
 * @a: array input
 * @n: integer input (n items in array)
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int b;

	while (i < n--)
	{
		b = a[i];
		a[i++] = a[n];
		a[n] = b;
	}
}

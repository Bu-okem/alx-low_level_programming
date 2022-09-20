#include "main.h"

/** 
 * swap_int - Entry point
 * Description - function that swaps the values of two integers
 * @a: int input
 * @b: int input
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

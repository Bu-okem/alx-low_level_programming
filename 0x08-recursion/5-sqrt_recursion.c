#include "main.h"

int _sqrt(int prev, int root);

/**
 * _sqrt_recursion - Entry point
 * Description - function that returns the natural square root of a number
 * @n: integer input
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(1, n));
}

/**
 * _sqrt - Entry point
 * Description - find square root of input
 * @prev: previous value
 * @root: square root value
 * Return: square root
 */

int _sqrt(int prev, int root)
{
	if (prev > root)
		return (-1);
	else if (prev * prev == root)
		return (prev);
	return (_sqrt(prev + 1, root));
}

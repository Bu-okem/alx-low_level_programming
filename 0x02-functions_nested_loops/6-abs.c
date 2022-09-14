#include "main.h"

/**
 * _abs - Entry point
 * Description - function that computes the absolute value of an integer
 * @c: Input
 * Return: absolute value of input
 */

int _abs(int c)
{
	if (c >= 0)
		return (c);
	else
		return (c * -1);
}

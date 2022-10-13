#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - Entry point
 * Description - function that returns the sum of a and b
 * @a: input integer
 * @b: input integer
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Entry point
 * Description - function that returns the difference between a and b
 * @a: input integer
 * @b: input integer
 * Return: difference between a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Entry point
 * Description - function that returns the product of a and b
 * @a: input integer
 * @b: input integer
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Entry point
 * Description - function that returns the quotient of a and b
 * @a: input integer
 * @b: input integer
 * Return: quotient of a and b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - Entry point
 * Description - function that returns the modulus of a and b
 * @a: input integer
 * @b: input integer
 * Return: modulus of a and b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}

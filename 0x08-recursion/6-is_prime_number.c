#include "main.h"

int is_divisible(int num, int div);

/**
 * is_prime_number - Entry point
 * Description - function that returns 1 if the input integer is a
 * prime number, otherwise return 0
 * @n: integer input
 * Return: 1 if input integer is prime number, otherwise 0
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n <= 3)
		return (1);

	return (is_divisible(n, div));
}

/**
 * is_divisible - Entry point
 * Description - check if number is divisible
 * @num: integer input
 * @div: result
 * Return: 1 if number is divisible otherwise 0 if number is not divisible
 */

int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}

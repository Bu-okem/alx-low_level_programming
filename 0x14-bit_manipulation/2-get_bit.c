#include "main.h"

/**
 * get_bit - Entry point
 * Description - function that returns the value of a bit at a given index
 * @n: int input
 * Return: value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int max = 0x01;

	max <<= index;
	if (max == 0)
		return (-1);

	if ((n & max))
		return (1);
	else
		return (0);
}

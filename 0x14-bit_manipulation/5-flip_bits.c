#include "main.h"

/**
 * flip_bits - Entry point
 * Description - function that returns the number of bits you
 * would need to flip to get from one number to another
 * @n: number of bits needed to flip
 * @m: int input
 * Return: number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flips = 0;
	unsigned long int xor = (n ^ m);
	unsigned long int max = 0x01;

	while (max <= xor)
	{
		if (max & xor)
			flips++;
		max <<= 1;
	}
	return (flips);
}

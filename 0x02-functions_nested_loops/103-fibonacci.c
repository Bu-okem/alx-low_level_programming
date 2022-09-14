#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	long int fibonacci[50], sum = 2;

	fibonacci[0] = 1;
	fibonacci[1] = 2;

	for (n = 2; n < 50; n++)
	{
		fibonacci[n] = fibonacci[n - 1] + fibonacci[n - 2];
		if ((fibonacci[n] % 2) == 0 && fibonacci[n] < 4000000)
			sum +=  fibonacci[n];
	}

	printf("%ld\n", sum);

	return (0);
}

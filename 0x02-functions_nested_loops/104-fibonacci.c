#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	unsigned long long int fibonacci[98];

	fibonacci[0] = 1;
	fibonacci[1] = 2;

	printf("%llu, %llu, ", fibonacci[0], fibonacci[1]);

	for (n = 2; n < 98; n++)
	{
		fibonacci[n] = fibonacci[n - 1] + fibonacci[n - 2];
		if (n == 97)
			printf("%llu\n", fibonacci[n]);
		else
			printf("%llu, ", fibonacci[n]);
	}

	return (0);
}

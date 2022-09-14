#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	long int fibonacci[98];

	fibonacci[0] = 1;
	fibonacci[1] = 2;

	printf("%ld, %ld, ", fibonacci[0], fibonacci[1]);

	for (n = 2; n < 98; n++)
	{
		fibonacci[n] = fibonacci[n - 1] + fibonacci[n - 2];
		if (n == 97)
			printf("%ld\n", fibonacci[n]);
		else
			printf("%ld, ", fibonacci[n]);
	}

	return (0);
}

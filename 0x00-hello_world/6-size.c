#include <stdio.h>
/**
 * main - Entry point
 *
 * Description - Prints size of types
 *
 * Return: Always 0 (Success)
 **/

int main(void)
{
	char charType;
	int intType;
	long int lintType;
	long long int lT;
	float floatType;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(charType));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(intType));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(lintType));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(lT));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(floatType));

	return (0);
}

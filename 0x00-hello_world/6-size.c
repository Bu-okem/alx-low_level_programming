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
	long int longintType;
	long long int longlongintType;
	float floatType;

	printf("Size of a char: %lu bytes\n", (unsigned long)sizeof(charType));
	printf("Size of a int: %lu bytes\n", (unsigned long)sizeof(intType));
	printf("Size of a long int: %lu bytes\n", (unsigned long)sizeof(longintType));
	printf("Size of a long long int: %lu bytes\n", (unsigned long)sizeof(longlongintType));
	printf("Size of a float: %lu bytes\n", (unsigned long)sizeof(floatType));

	return(0)
}

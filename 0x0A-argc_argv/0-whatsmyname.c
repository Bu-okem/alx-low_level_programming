#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Description - program that prints its name, followed by a new line
 * @a: arguement count
 * @b: argument value, strings that come after calling function
 * Return: Always 0 (Success)
 */

int main(int a, char *b[])
{
	if (a > 0)
		printf("%s\n", b[0]);

	return (0);
}

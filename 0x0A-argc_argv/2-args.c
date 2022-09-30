#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Description - program that prints all arguments it receives
 * @a: arguement counter
 * @b: arguement values
 * Return: Always 0 (success)
 */

int main(int a, char **b)
{
	while (a--)
		printf("%s\n", *b++);

	return (0);
}

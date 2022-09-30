#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Description - program that prints the number of arguments passed into it
 * @a: argument counter
 * @b: argument values
 * Return: Always 0 (Success)
 */

int main(int a, char *b[])
{
	if (b[0])
		printf("%d\n", a - 1);

	return (0);
}

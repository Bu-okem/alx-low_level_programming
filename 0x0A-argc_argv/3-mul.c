#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description - program that multiplies two numbers
 * @a: arguments' counter
 * @b: arguments' values
 * Return: Always 0 (success)
 */

int main(int a, char **b)
{
	int num1, num2, result;

	if (a != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(a[1]);
		num2 = atoi(a[2]);
		result = num1 * num2;
		printf("%d\n", result);
		return (0);
	}
}

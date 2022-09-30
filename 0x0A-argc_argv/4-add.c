#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * Description - program that adds positive numbers
 * @a: arguments' counter
 * @b: argument's values
 * Return: Always 0 (Success)
 */

int main(int a, char **b)
{
	int num, result = 0, i;

	while (a-- > 1)
	{
		for (i = 0; b[a][i]; i++)
		{
			if (!(isdigit(b[a][i])))
			{
				printf("Error\n");
				return (1);
			}
		}

		num = atoi(b[a]);
		result += num;
	}
	printf("%d\n", result);
	return (0);
}

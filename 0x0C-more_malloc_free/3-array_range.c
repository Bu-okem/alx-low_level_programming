#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Entry point
 * Description - function that creates an array of integers
 * @min: min number
 * @max: max number
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *new_array;
	int diff, i;

	if (min > max)
		return (NULL);

	diff = max - min;
	new_array = malloc((diff + 1) * sizeof(int));
	if (new_array == NULL)
		return (NULL);

	for (i = 0; i <= diff; i++)
		new_array[i] = min++;

	return (new_array);
}

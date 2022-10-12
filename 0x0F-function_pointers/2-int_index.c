#include <stdlib.h>

/**
 * int_index - Entry point
 * Description - function that searches for an integer
 * @array: pointer to array
 * @size: size of array
 * @cmp: cmp to compare elements
 * Return: index of first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int n = 0;

	if (cmp == NULL || array == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (; n < size; n++)
		if (cmp(array[n]))
			return (n);

	if (n == size)
		return (-1);

	return (-1);
}

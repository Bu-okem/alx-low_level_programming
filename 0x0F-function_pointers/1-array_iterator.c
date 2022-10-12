#include <stdlib.h>

/**
 * array_iterator - Entry point
 * Description - function that executes a function given as a parameter
 * on each element of an array
 * @array: pointer to array
 * @size: size of array
 * @action: function to iterate through array
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n = 0;

	if (action == NULL || array == NULL)
		return;

	for (; n < size; n++)
		action(array[n]);
}

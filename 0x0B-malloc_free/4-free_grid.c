#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Entry point
 * Description - function that frees a 2 dimensional grid previously
 * created by your alloc_grid function
 * @grid: array input
 * @height: integer input
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int n = 0;

	if (grid == NULL)
		return;
	while (n < height)
		free((int *)grid[n++]);
	free(grid);
}

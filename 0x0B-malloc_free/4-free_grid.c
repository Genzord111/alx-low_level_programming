#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - check the code
 * @grid: pointer to array of with memory allocated
 * @height: number of column
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

}

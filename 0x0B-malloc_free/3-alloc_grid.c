#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* alloc_grid - allocates memory for a 2D array
* @width: number of rows
* @height: number of columns
* Return: pointer array
*/

int **alloc_grid(int width, int height)
{
	int i = 0;
	int **matrix;

	if (width == 0 || height == 0)
		return (NULL);

	matrix = (int **)malloc(height * sizeof(int *));

	for (i = 0; i < width; i++)
		matrix[i] = (int *)malloc(width * sizeof(int *));

	if (matrix == NULL)
		return (NULL);

	return (matrix);
}

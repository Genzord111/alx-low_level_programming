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
	int j;
	int **matrix;

	if (width == 0 || height == 0)
		return (NULL);

	matrix = (int **)malloc(height * sizeof(int *));

	if (matrix == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		matrix[i] = (int *)malloc(width * sizeof(int *));

	if (matrix[i] == NULL) 
	{
		for (int j = 0; j < i; j++) 
		{
			free(matix[j]);
		}
		free(matrix);
		return NULL;
	}

	for (j = 0; j < width; j++)
		matrix[i][j] = 0;
	}

	return (matrix);
}

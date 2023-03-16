#include <stdlib.h>
#include "main.h"

/**
* alloc_grid - create matrix
* @width: integer
* @height: integer
* Return: pointer to list of pointers
* to list of integers (matrix)
*/
int **alloc_grid(int width, int height)
{
	int **matrix;
	int *row;
	int i, j;

	matrix = malloc(sizeof(int *) * height);
	if (matrix == 0)
		return (0);

	for (i = 0; i < height; i++)
	{
		row = malloc(sizeof(int) * width);
		if (row == 0)
			return (0);
		matrix[i] = row;
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			matrix[i][j] = 0;

	return (matrix);
}

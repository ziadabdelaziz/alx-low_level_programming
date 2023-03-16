#include <stdio.h>
#include <stdlib.h>

/**
* free_grid - free grid
* @grid: two dimentional array
* @height: integer
* Return: None
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

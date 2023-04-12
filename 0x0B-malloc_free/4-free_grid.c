#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees the 2D grid in the previous file
 * @grid: the pointer to the grid
 * @height: grid height
 * Return: void
*/

void free_grid(int **grid, int height)
{
	int n;

	for (n = 0; n < height; n++)
	{
		free(grid[n]);
	}
	free(grid);
}

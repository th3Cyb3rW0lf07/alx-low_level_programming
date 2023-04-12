#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: grid width
 * @height: grid height
 * Return: pointer to 2D array or NULL if otherwise
*/

int **alloc_grid(int width, int height)
{
	int **g;
	int m, n;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	g = malloc(sizeof(int *) * height);

	if (g == NULL)
	{
		return (NULL);
	}

	for (m = 0; m < height; m++)
	{
		g[m] = malloc(sizeof(int) * width);
		if (g[m] == NULL)
		{
			for (n = 0; m < n; n++)
			{
				free(g);
				return (NULL);
			}
		}
		for (n = 0; n < width; n++)
		{
			g[m][n] = 0;
		}
	}
	return (g);
}

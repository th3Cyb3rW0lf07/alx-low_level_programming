#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: the pointer to the newly created array
*/

int *array_range(int min, int max)
{
	int *arr;
	int p, s;

	if (min > max)
	{
		return (NULL);
	}

	s = max - min + 1;

	arr = malloc(sizeof(*arr) * s);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (p = 0; p < s; p++)
	{
		arr[p] = min + p;
	}

	return (arr);
}

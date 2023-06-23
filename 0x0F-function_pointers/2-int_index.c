#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an int
 * @array: the array to be searched
 * @size: the size of the array
 * @cmp: the function pointer
 * Return: the value of the index
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}

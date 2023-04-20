#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array
 * @size: the number of elements in the array
 * @cmp: the function pointer
 * Return: -1 if condition doesn't match
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (n = 0; n < size; n++)
	{
		if (cmp(array[n]) != 0)
		{
			return (n);
		}
	}

	return (-1);
}

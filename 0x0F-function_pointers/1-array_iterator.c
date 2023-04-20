#include "function_pointers.h"

/**
 * array_iterator - iterates through an array
 * @array: the array
 * @size: array size
 * @action: function pointer
*/

void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned int n;

	if (array && action)
	{
		for (n = 0; n < size; n++)
		{
			action(array[n]);
		}
	}
}

#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array and initializes it with a char
 * @size: the size of the array
 * @c: the char
 * Return: the array pointer or NULL if otherwise
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int n;

	if (size == 0)
	{
		return ('\0');
	}

	array = malloc(size * sizeof(char));

	if (array == '\0')
	{
		return ('\0');
	}

	for (n = 0; n < size; n++)
	{
		array[n] = c;
	}

	return (array);
}

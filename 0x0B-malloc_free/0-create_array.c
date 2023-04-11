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
	char *ary;
	unsigned int n;

	if (size == 0)
	{
		return (NULL);
	}

	ary = malloc(size * sizeof(c));

	if (ary == NULL)
	{
		return (NULL);
	}

	for (n = 0; n < size; n++)
	{
		ary[n] = c;
	}

	return (ary);
}

#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a block of memory
 * @ptr: pointer to old memory allocation
 * @old_size: size of ptr in bytes
 * @new_size: size of new memory block in bytes
 * Return: pointer to new memory block
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int n;
	char *ptr2, *char_ptr;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	ptr2 = malloc(new_size);

	if (ptr2 == NULL)
	{
		return (NULL);
	}

	char_ptr = (char *)ptr;

	for (n = 0; n < old_size && n < new_size; n++)
	{
		ptr2[n] = char_ptr[n];
	}

	free(ptr);

	return (ptr2);

}

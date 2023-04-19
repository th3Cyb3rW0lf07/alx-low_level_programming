#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of elements
 * @nmemb: number of elememts in the array
 * @size: size of bytes of the array elements
 * Return: pointer to allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int n;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (n = 0; n < (nmemb * size); n++)
	{
		ptr[n] = 0;
	}
	return (ptr);

}

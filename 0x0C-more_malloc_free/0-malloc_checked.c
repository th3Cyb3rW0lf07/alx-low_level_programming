#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - checks if malloc fails or not
 * @b: number of bytes
 * Return: pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *h;

	h = malloc(b);

	if (h == NULL)
	{
		exit (98);
	}
	return(h);
}

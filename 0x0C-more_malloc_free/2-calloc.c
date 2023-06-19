#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and initializes it with zeros
 * @nmemb: Number of elements in the array
 * @size: Size of each element in bytes
 *
 * Return: Pointer to the allocated memory
 *         Returns NULL if nmemb or size is 0, or if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    void *p;
    unsigned int total_size;

    if (nmemb == 0 || size == 0)
        return (NULL);

    total_size = nmemb * size;
    p = malloc(total_size);

    if (p == NULL)
        return (NULL);

    for (unsigned int i = 0; i < total_size; i++)
    {
        ((char *)p)[i] = 0;
    }

    return (p);
}

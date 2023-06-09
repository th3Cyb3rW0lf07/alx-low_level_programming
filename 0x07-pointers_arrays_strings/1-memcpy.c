#include "main.h"

/**
 * _memcpy - copies bytes from memory
 * @dest: destination to be copied to
 * @src: source to be copied from
 * @n: number of bytes to be copied
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

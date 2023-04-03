#include "main.h"

/**
 * _memset - fill a block of memory with a particular value
 * @s: memory block to be filled
 * @b: char to be used for filling
 * @n: number of  bytes to be filled
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

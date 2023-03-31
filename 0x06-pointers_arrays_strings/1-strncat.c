#include "main.h"

/**
 * _strncat - concatenates 2 strings
 * @dest: char
 * @src: char
 * @n: number of chars
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i = 0;

	while (*ptr != '\0')
	{
		ptr++;
	}

	while (*src != '\0' && i < n)
	{
		*ptr++ = *src++;
		i++;
	}
	*ptr = '\0';
	return (dest);
}

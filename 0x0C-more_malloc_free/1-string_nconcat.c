#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: amount of bytes
 * Return: pointer to allocated memory
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length_s1, length_s2;
	char *r;

	length_s1 = strlen(s1);
	length_s2 = strlen(s2);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	if (n >= length_s2)
	{
		n = length_s2;
	}

	r = malloc(sizeof(char *) * (length_s1 + n + 1));
	if (r == NULL)
	{
		return (NULL);
	}

	strncpy(r, s1, length_s1);
	strncpy(r + length_s1, s2, n);
	r[length_s1 + n] = '\0';

	return (r);
}

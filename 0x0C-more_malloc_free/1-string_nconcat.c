#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes from s2 to concatenate
 *
 * Return: Pointer to the concatenated string (s1 + s2)
 *         Returns NULL if the function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenated;
	unsigned int l1 = 0, l2 = 0;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[l1] != '\0')
		l1++;

	while (s2[l2] != '\0')
		l2++;

	if (n >= l2)
		n = l2;

	concatenated = malloc(sizeof(char) * (l1 + n + 1));

	if (concatenated == NULL)
		return NULL;

	for (i = 0; i < l1; i++)
		concatenated[i] = s1[i];

	for (j = 0; j < n; j++)
		concatenated[i++] = s2[j];

	concatenated[i] = '\0';

	return (concatenated);
}

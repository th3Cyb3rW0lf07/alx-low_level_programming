#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to concatenated string or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *con;
	int m, n, l1 = 0, l2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[l1])
		l1++;
	while (s2[l2])
		l2++;

	con = malloc(sizeof(char) * (l1 + l2 + 1));

	if (con == NULL)
		return (NULL);

	for (m = 0; s1[m]; m++)
		con[m] = s1[m];

	for (n = 0; s2[n]; n++)
		con[m + n] = s2[n];

	con[m + n] = '\0';

	return (con);
}

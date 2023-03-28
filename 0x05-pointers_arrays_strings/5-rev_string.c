#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 * Return: the reversed string
 */

void rev_string(char *s)
{
	int i = 0, j, k;
	char f;

	while (s[i] != '\0')
	{
		i++;
	}
	k = i - 1;
	for (j = 0; k >= 0 && j < k; k--, j++)
	{
		f = s[j];
		s[j] = s[k];
		s[k] = f;
	}
}

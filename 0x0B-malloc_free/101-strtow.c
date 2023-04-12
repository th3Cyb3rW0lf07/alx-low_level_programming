#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * strtow - splits a string into words
 * @str: the string in question
 * Return: the split string else NULL
*/

char **strtow(char *str)
{
	int m, n, p, length = strlen(str);
	int count = 0;
	char **word = NULL;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	for (m = 0; m < length; m++)
	{
		if (str[m] != ' ' && (m == 0 || str[m - 1] == ' '))
		count++;
	}
	word = malloc(sizeof(char *) * (count + 1));
	if (word == NULL)
	{
		return (NULL);
	}
	for (m = 0; n = 0; m < length; m++)
	{
		if (str[m] != ' ')
		{
			p = m;
			while (str[p] != ' ' && p < length)
				p++;
			word[n] = malloc(sizeof(char) * (p - m + 1));
			if (word[n] == NULL)
				return (NULL);
			strncpy(word[n], str + m, p - m);
			word[n][p - m] = '\0';
			n++;
			m = p;
		}
	}
	word[n] = '\0';
	return (word);
}

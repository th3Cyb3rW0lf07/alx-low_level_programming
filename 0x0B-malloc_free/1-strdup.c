#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: the string to be copied
 * Return: a pointer to the newly allocated space
*/

char *_strdup(char *str)
{
	int i, len = 0;
	char *dupl;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	if (len == 0)
	{
		dupl = (char *)malloc(1 * sizeof(char));
		if (dupl == NULL)
		{
			return (NULL);
		}
		dupl[0] = '\0';
		return (dupl);
	}

	dupl = (char *)malloc((len + 1) * sizeof(char));

	if (dupl == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
		dupl[i] = str[i];
	}

	return (dupl);
}

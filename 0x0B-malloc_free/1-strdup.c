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
	int i, len;
	char *dupl;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
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

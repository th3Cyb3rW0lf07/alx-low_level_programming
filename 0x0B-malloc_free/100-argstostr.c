#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all args of a program
 * @ac: argument count
 * @av: argument vector
 * Return: the pointer to the new string
*/

char *argstostr(int ac, char **av)
{
	int i, j, length = 0, curr_index = 0;
	char *concat_str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			length++;
		length++;
	}

	concat_str = malloc((length + 1) * sizeof(char));

	if (concat_str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concat_str[curr_index++] = av[i][j];
		}
		concat_str[curr_index++] = '\n';
	}
	concat_str[curr_index] = '\0';

	return (concat_str);

}

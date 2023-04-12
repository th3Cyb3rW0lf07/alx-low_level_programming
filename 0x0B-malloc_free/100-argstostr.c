#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates two arguments together
 * @ac: number of arguments
 * @av: the array the args are stored in
 * Return: concatenated string
*/

char *argstostr(int ac, char **av)
{
	int m, n, length = 0, p = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (m = 0; m < ac; m++)
	{
		length += strlen(av[m]) + 1;
	}

	str = malloc(sizeof(char) * length);

	if (str == NULL)
	{
		return (NULL);
	}

	for (m = 0; m < ac; m++)
	{
		for (n = 0; av[m][n]; n++)
		{
			str[p] = av[m][n];
			p++;
		}
		str[p] = '\n';
		p++;
	}
	str[p] = '\0';

	return (str);
}

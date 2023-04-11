#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in
 * memory containing a copy of the string given as a parameter
 * @str: the string to be duplicated
 *
 * Return: pointer to the duplicated string or NULL if otherwise
*/

char *_strdup(char *str)
{
	char *_dupstr;
	unsigned int i, n = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[n] != '\0')
		n++;

	_dupstr = malloc(sizeof(char) * (n + 1));

	if (_dupstr == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
		_dupstr[i] = str[i];

	return (_dupstr);
}

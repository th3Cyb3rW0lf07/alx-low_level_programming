#include "main.h"

/**
 * string_toupper - converts strings from lowercase to uppercase
 * @c: the inputted char
 * Return: the dest pointer
 */

char *string_toupper(char *c)
{
	int s = 0;

	while (*(c + s) != '\0')
	{
		if ((*(c + s) >= 97) && (*(c + s) <= 122))
		{
			*(c + s) -= 32;
		}
		s++;
	}

	return (c);
}

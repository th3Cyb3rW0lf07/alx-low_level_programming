#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the character to be checked
 * Return: pointer to the character in the string, or NULL if otherwise
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (c == '\0')
	{
		return (s);
	}
	return ('\0');
}

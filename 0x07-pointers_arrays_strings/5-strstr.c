#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: full string
 * @needle: substring
 * Return: a pointer to the beginning of the
 * located substring or NULL if otherwise
 */

char *_strstr(char *haystack, char *needle)
{
	char *n1, *n2, *n3;

	if (*needle == '\0')
	{
		return (haystack);
	}
	for (n1 = haystack; *n1 != '\0'; n1++)
	{
		n2 = n1;
		n3 = needle;

		while (*n2 != '\0' && *n3 != '\0' && *n2 == *n3)
		{
			n2++;
			n2++;
		}
		if (*n3 == '\0')
		{
			return (n1);
		}
	}
	return ('\0');
}


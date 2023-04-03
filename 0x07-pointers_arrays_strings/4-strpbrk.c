#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string to be checked
 * @accept: string to be checked
 * Return:  a pointer to the byte in s that
 * matches the bytes in accept or NULL otherwise
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *k = accept;

		while (*k != '\0')
		{
			if (*s == *k)
			{
				return (s);
			}
			k++;
		}
		s++;
	}
	return ('\0');
}

#include "main.h"

/**
 * rot13 - encodes using the ROT13 cipher
 * @s: the char to be encoded
 * Return: encoded char
 */

char *rot13(char *s)
{
	char *p = s;
	char c;
	int i;

	while (*p != '\0')
	{
		for (i = 0; i < 2; i++)
		{
			if (*p >= 'a' && *p <= 'z')
			{
				c = ((*p - 'a') + 13) % 26 + 'a';
			}
			else if (*p >= 'A' && *p <= 'Z')
			{
				c = ((*p - 'A') + 13) % 26 + 'A';
			}
			else
			{
				c = *p;
			}
			*p++ = c;
		}
	}
	return (s);
}

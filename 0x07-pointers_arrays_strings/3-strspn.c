#include "main.h"

/**
 * _strspn - checks for the length of a prefix substring
 * @s: the initial segment
 * @accept: the accepted bytes
 * Return: number of bytes in s same as accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int l = 0;
	char *m = accept;

	while (*s != '\0')
	{
		while (*m != '\0')
		{
			if (*s == *m)
			{
				l++;
				break;
			}
			m++;
		}
		if (*p == '\0')
		{
			return (l);
		}
		m = accept;
		s++;
	}
	return (l);
}

#include "main.h"

/**
 * _strspn - checks for the length of a prefix substring
 * @s: the initial segment
 * @accept: the accepted bytes
 * Return: number of bytes in s same as accept
 */

unsigned int *_strspn(char *s, char *accept)
{
	unsigned int pel = 0;
	char *k;
	int clear;

	if (*s == '\0' || *accept == '\0')
	{
		return (0);
	}
	while (*s != '\0')
	{
		clear = 0;
		for (k = accept; *k != '\0'; k++)
		{
			if (*s == *k)
			{
				clear = 1;
				break;
			}
		}
		if (clear == 0)
		{
			return (pel);
		}
		pel++;
		s++;
	}
	return (pel);
}

#include "main.h"

/**
 * _strspn - checks for the length of a prefix substring
 * @s: the initial segment
 * @accept: the accepted bytes
 * Return: number of bytes in s same as accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, b, c;

	a = 0;
	b = 0;
	c = 0;

	while (s[b] != '\0')
	{
		while (accept[a] != '\0')
		{
			if (s[b] == accept[a])
			{
				c++;
				break;
			}
			a++;
		}
		if (accept[a] == '\0')
		{
			break;
		}
		b++;
	}
	return (c);

#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: char to check
 * Return: length of the string
 */

int _strlen(char *s)
{
	int c = 0;

	while (*(s + c) != '\0')
		c++;
	return (c);
}

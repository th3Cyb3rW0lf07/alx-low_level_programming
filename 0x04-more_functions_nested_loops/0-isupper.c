#include "main.h"
/**
 * _isupper - checks if a character is in uppercase
 * @c: the character in question
 * Return: 1 if c is uppercase, 0 if otherwise
 */

int _isupper(int c)
{
	if  (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

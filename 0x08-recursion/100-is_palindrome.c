#include "main.h"

/**
 * str_len - recursively calculates the length of the string
 * @s: the inputted string
 * Return: the string length
 */

int str_len(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + str_len(s + 1));
	}
}

/**
 * palindrome_finder - helps check if a string is a palindrome
 * @s: the string to be checked
 * @begin: first index
 * @end: the last index
 * Return: 1 if palindrome otherwise 0
 */

int palindrome_finder(char *s, int begin, int end)
{
	if (begin >= end)
	{
		return (1);
	}
	else if (s[begin] != s[end])
	{
		return (0);
	}
	else
	{
		return (palindrome_finder(s, begin + 1, end - 1));
	}
}


/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to be checked
 * Return: 1 if palindrome otherwise 0
 */

int is_palindrome(char *s)
{
	int len = str_len(s);

	if (len == 0)
	{
		return (1);
	}
	else
	{
		return (palindrome(s, 0, len - 1));
	}
}

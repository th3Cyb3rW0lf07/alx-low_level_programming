#include <stdio.h>
#include "main.h"

/* Prototype function */
int is_palindrome(char *s);

/* Helper function */
int palindrome_helper(char *s, int start, int end);

/* Counter*/
int str_len(char *s);

/**
 * str_len - calculates the length of the string
 * @s: the string in question
 * Return: the string length
*/

int str_len(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + str_len(s + 1));
}

/**
 * palindrome_helper - helper functoin to check if it is a palindrome
 * @s: the string
 * @start: start index
 * @end: the end index
 * Return: if string is a palindrome 1, otherwise 0
*/

int palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - checks if the string is a palindrome
 * @s: the string to be checked
 * Return: the value from palindrome_helper
*/

int is_palindrome(char *s)
{
	int length = str_len(s);

	if (length == 0)
	{
		return (1);
	}
	return (palindrome_helper(s, 0, length - 1));
}

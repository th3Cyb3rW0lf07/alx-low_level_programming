#include <stdio.h>
#include "main.h"

/* Prototype */
int _sqrt_recursion(int n);

/* Helper function*/
int _sqrt_helper(int n, int i);

/**
 * _sqrt_recursion - function that calculates the square root of an integer
 * @n: the integer in question
 * Return: the square root, otherwise -1 if no natural
 * square root is found
*/
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	else if (n == _sqrt_helper(n, 1) * _sqrt_helper(n, 1))
	{
		return (_sqrt_helper(n, 1));
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_helper - a helper function to calculate the square root
 * @n: the integer
 * @i: the supposed square root
 * Return: the natural square root if found, or -1 if otherwise
*/
int _sqrt_helper(int n, int i)
{
	if (i > n / 2)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (_sqrt_helper(n, i + 1));
	}
}

#include "main.h"

/**
 * _sqrt_recursion - calculates the square root of an integer
 * @n: the integer in question
 * Return: -1 if n doesn't have a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	else if (n == _sqrt_finder(n, 1) * _sqrt_finder(n, 1))
	{
		return (_sqrt_finder(n, 1));
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_finder - calculates the natural square root of an integer
 * @n: the integer in question
 * @i: the number to be checked if it's a natural square root
 * of n
 * Return: -1 is it's not the natural square root
 */

int _sqrt_finder(int n, int i)
{
	if (i > n / 2)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (_sqrt_finder(n, i + 1));
	}
}

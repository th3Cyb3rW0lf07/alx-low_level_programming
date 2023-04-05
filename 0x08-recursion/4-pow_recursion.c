#include "main.h"

/**
 * _pow_recursion - returns the result of the power of a number
 * @x: the base
 * @y: the index
 * Return: -1 if y < 0
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}

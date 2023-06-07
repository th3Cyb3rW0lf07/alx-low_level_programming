#include <stdio.h>
#include "main.h"

/**
 * factorial - a function that calculates the factorial of a number
 * @n: the integer to be calculated
 * Return: the factorial
*/

int factorial(int n)
{
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

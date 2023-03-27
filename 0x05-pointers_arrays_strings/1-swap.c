#include "main.h"

/**
 * swap_int - swaps the value of two integers.
 * @a: the first integer
 * @b: the second integer
 * Return: doesn't return anything
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

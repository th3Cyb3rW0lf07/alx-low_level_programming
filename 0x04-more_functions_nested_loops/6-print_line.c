#include "main.h"

/**
 * print_line - draws a straight line
 * @n: the integer required
 * Return: nothing
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}

	int m;

	for (m = 0; m < n; m++)
	{
		_putchar(95);
	}
	_putchar('\n');
}


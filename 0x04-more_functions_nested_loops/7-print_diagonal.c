#include "main.h"

/**
 * print_diagonal - prints diagonal line n times.
 * @n: times diagonal line is printed.
 * Return: nothing.
 */
void print_diagonal(int n)
{
	int i, g;

	for (i = 0; i < n; i++)
	{
		for (g = 0; g < i; g++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (i < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}

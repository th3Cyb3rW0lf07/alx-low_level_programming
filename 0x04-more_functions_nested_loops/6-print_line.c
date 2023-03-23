#include "main.h"

/**
 * print_line - prints straight line.
 * @n: times straight line is printed.
 * Return: nothing.
 */
void print_line(int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		_putchar(95);
	}
	_putchar('\n');
}

#include "main.h"

/**
 * print_triangle - prints a triangle.
 * @size: numbers of lines.
 * Return: nothing.
 */
void print_triangle(int size)
{
	int i, g;

	for (i = 0; i < size; i++)
	{
		for (g = 1; g < (size - i); g++)
			_putchar(' ');
		for (g--; g < size; g++)
			_putchar(35);
		if (i < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}

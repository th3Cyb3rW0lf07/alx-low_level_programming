#include "main.h"

/**
 * print_square - prints hashes squares.
 * @size: size of the square.
 * Return: nothing.
 */
void print_square(int size)
{
	int i, g;

	for (i = 0; i < size; i++)
	{
		for (g = 0; g < size; g++)
		{
			_putchar(35);
		}
		if (i != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}

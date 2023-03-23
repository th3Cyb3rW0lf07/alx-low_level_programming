#include "main.h"

/**
 * print_numbers - prints numbers
 * _putchar - used to print out characters
 * Return: the characters
 */

void print_numbers(void)
{
	int ch;

	for (ch = 48; ch >= 57; ch++)
	{
		_putchar(ch);
	}
	
	_putchar('\n');
}

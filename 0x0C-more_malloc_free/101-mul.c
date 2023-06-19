#include "main.h"
#include <stdlib.h>

int validate_number(char *s);
void multiply(char *num1, char *num2);
void print_number(int *result, int length);

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char *argv[])
{
	if (argc != 3 || !validate_number(argv[1]) || !validate_number(argv[2]))
	{
		exit(98);
	}

	multiply(argv[1], argv[2]);

	return (0);
}

/**
 * validate_number - Validates if a string represents a valid number.
 * @s: The string to validate.
 *
 * Return: 1 if the string is a valid number, 0 otherwise.
 */
int validate_number(char *s)
{
	while (*s)
	{
		if (*s < '0' || *s > '9')
		{
			return (0);
		}
		s++;
	}

	return (1);
}

/**
 * multiply - Multiplies two positive numbers.
 * @num1: The first number.
 * @num2: The second number.
 */
void multiply(char *num1, char *num2)
{
	int l1 = 0;
	int l2 = 0;
	int total_len, *result, i, j, n1, n2;
	int product, pos1, pos2, sum;

	while (num1[l1])
	{
		l1++;
	}

	while (num2[l2])
	{
		l2++;
	}

	total_len = l1 + l2;
	*result = malloc(total_len * sizeof(int));

	if (result == NULL)
	{
		exit(98);
	}

	for (i = 0; i < total_len; i++)
	{
		result[i] = 0;
	}

	for (i = l1 - 1; i >= 0; i--)
	{
		for (j = l2 - 1; j >= 0; j--)
		{
			n1 = num1[i] - '0';
			n2 = num2[j] - '0';

			product = n1 * n2;
			pos1 = i + j;
			pos2 = i + j + 1;

			sum = product + result[pos2];

			result[pos1] += sum / 10;
			result[pos2] = sum % 10;
		}
	}

	print_number(result, total_len);

	free(result);
}

/**
 * print_number - Prints a number represented by an integer array.
 * @result: The integer array representing the number.
 * @length: The length of the integer array.
 */
void print_number(int *result, int length)
{
	int leading_zero = 1;
	int i;

	for (i = 0; i < length; i++)
	{
		if (result[i] != 0)
		{
			leading_zero = 0;
		}

		if (!leading_zero)
		{
			_putchar(result[i] + '0');
		}
	}

	if (leading_zero)
	{
		_putchar('0');
	}

	_putchar('\n');
}

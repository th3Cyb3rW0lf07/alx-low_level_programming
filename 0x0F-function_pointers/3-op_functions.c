#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: first integer
 * @b: second integer
 * Return: addition
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two numbers
 * @a: first number
 * @b: second number
 * Return: subtraction
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: first number
 * @b: second number
 * Return: multiplication
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: first number or numerator
 * @b: denominator or second number
 * Return: division
*/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Can't work\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - calculates the modulos of two numbers
 * @a: the first number
 * @b: the second number
 * Return: the modulos
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Not possible\n");
		exit(100);
	}
	return (a % b);
}

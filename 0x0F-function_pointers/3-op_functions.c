#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the sum of the integers
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_mul - multiplies 2 integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the product of the integers
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_sub - subtracts 2 integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the difference between the integers
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mod - Returns the remainder of the division of a by b.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}

/**
 * op_div - divides two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the quotient
*/
int op_div(int a, int b)
{
	return (a / b);
}

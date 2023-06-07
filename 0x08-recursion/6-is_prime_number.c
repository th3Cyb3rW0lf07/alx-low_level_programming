#include <stdio.h>
#include "main.h"

/* Prototype*/
int is_prime_number(int n);

/* helper function*/
int is_prime_helper(int n, int i);

/**
 * is_prime_number - a function that returns 1 if integer
 * is a prime number, 0 if otherwise
 * @n: the integer to be checked
 * Return: 0 if not prime, 1 if otherwise
*/

int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - the helper function to is_prime_number
 * @n: the integer
 * @i: the divisor candidate
 * Return: the required if prime or not
*/

int is_prime_helper(int n, int i)
{
	if (n <= 2)
	{
		return (n == 2);
	}
	if (n % i == 0)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	return (is_prime_helper(n, i + 1));
}

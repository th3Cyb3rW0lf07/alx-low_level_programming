#include "main.h"

int _prime_finder(int n, int i);

/**
 * is_prime_number - checks if a number is a prime number
 * @n: the number in question
 * Return: 1 if it's a prime number otherwise 0
 */

int is_prime_number(int n)
{
	return (_prime_finder(n, 2));
}


/**
 * _prime_finder - checks for the prime numbers
 * assists the is_prime_number function
 * @n: the number in question
 * @i: the divisor
 * Return: 1 if prime otherwise 0
 */

int _prime_finder(int n, int i)
{
	if (n <= 2)
	{
		return (n == 2);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else if (i * i > n)
	{
		return (1);
	}
	else
	{
		return (_prime_finder(n, i + 1));
	}
}

#include "variadic_functions.h"

/**
 * sum_them_all - sums all of its params
 * @n: number of args
 * Return: the sum of params
*/

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list arg;
	unsigned int p;

	if (n == 0)
	{
		return (0);
	}

	va_start(arg, n);

	for (p = 0; p < n; p++)
	{
		sum += va_arg(arg, int);
	}

	va_end(arg);
	return (sum);
}

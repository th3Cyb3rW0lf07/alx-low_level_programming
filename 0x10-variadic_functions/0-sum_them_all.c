#include "variadic_functions.h"

/**
 * sum_them_all - Sums all the parameters passed
 * @n: The number of parameters to be summed.
 *
 * Return: The sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0, number;
	unsigned int i;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		number = va_arg(args, int);
		sum += number;
	}

	va_end(args);
	return (sum);
}

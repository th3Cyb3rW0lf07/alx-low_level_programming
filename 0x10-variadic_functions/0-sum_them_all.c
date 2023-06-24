#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums up all numbers
 * @n: the first integer argument
*/

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, number;
	unsigned int i;

	if (n == 0)
		return (0);

	va_list args;
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		number = va_arg(args, int);
		sum += number;
	}

	va_end(args);
	return (sum);
}

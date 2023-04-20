#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: the string to be printed between numbers
 * @n: the number of ints passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int p;
	int num;
	va_list arg;

	va_start(arg, n);

	for (p = 0; p < n; p++)
	{
		num = va_arg(arg, int);
		printf("%d", num);

		if (separator != NULL && p < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(arg);
	printf("\n");
}

#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers
 * @separator: the string to be printed between the numbers
 * @n: the number of integers passed
 * @...: The variable number of integers to be printed.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int num;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(args, n);

	num = va_arg(args, int);
	printf("%d", num);

	for (i = 1; i < n; i++)
	{
		if (separator != NULL)
			printf("%s", separator);

		num = va_arg(args, int);
		printf("%d", num);
	}

	va_end(args);

	printf("\n");
}

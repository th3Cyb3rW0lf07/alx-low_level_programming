#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: the string to be printed between the strings
 * @n: number of strings to be passed
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int p;
	char *str;
	va_list arg;

	va_start(arg, n);

	for (p = 0; p < n; p++)
	{
		str = va_arg(arg, char *);

		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}

		if (separator != NULL && p < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(arg);
	printf("\n");
}

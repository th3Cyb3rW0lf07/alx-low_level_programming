#include "variadic_functions.h"

/**
 * print_strings - a function that print strings
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *s;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	va_end(args);

	printf("\n");
}

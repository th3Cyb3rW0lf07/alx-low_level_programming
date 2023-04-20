#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	unsigned int n = 0, p, c = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(arg, format);
	while (format && format[n])
	{
		p = 0;
		while (t_arg[p])
		{
			if (format[n] == t_arg[p] && c)
			{
				printf(", ");
				break;
			} p++;
		}
		switch (format[n])
		{
		case 'c':
			printf("%c", va_arg(arg, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(arg, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(arg, double)), c = 1;
			break;
		case 's':
			str = va_arg(arg, char *), c = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} n++;
	}
	printf("\n"), va_end(arg);
}

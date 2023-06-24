#include "variadic_functions.h"
/**
 * print_all - a function that prints anything
 * @format: a list of types of arguments passed to the function
*/
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	char format_char;

	va_start(args, format);

	while (format && format[i] != '\0')
	{
		format_char = format[i];

		switch (format_char)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				printf("%s", str ? str : "(nil)");
				break;
			default:
				break;
		}
		if (format[i + 1] != '\0' && (format_char == 'c' || format_char == 'i'
		|| format_char == 'f' || format_char == 's'))
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}

#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: the supplied name
 * @f: the fuction pointer
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}

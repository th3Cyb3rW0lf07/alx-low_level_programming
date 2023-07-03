#include "lists.h"

/**
 * print - prints a message
*/

void print()
{
	printf("You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!\n");
}

void __attribute__((constructor)) print(void);

#include <stdio.h>

void my_const() __attribute__((constructor));

/**
 * print - prints a message
*/

void print(void)
{
	printf("You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!\n");
}

/**
 * my_const - Ensures print is executed before main
*/
void my_const(void)
{
	print();
}

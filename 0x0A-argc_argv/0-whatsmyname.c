#include <stdio.h>

/**
 * main - prints the name of the program, foolowed by a new line
 * @argc: argument count
 * @argv: argument vector
 * Return: the program name
*/

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}

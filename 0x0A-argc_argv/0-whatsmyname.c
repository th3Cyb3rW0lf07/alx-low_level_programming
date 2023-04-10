#include <stdio.h>

/**
 * main - prints out the program name
 * @argc: the count of the arguments
 * @argv: the argument vector
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}

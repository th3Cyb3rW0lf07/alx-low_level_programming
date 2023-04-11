#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: the number of arguments
 * @argv: the argument vector
 * Return: 0 if succesful
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

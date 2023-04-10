#include <stdio.h>

/**
 * main - prints out the arguments it receives
 * @argc: the argument counter
 * @argv: the argument vector
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int c;

	for (c = 0; c < argc; c++)
	{
		printf("%s\n", argv[c]);
	}
	return (0);
}

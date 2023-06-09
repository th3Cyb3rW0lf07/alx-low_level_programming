#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 numbers passed as args
 * @argc: argument counter
 * @argv: argument vector
 * Return: 1
*/

int main(int argc, char *argv[])
{
	int i, product = 0;

	if (argc == 3)
	{
		for (i = 0; i < argc; i++)
		{
			product = product * atoi(argv[i]);
		}
		printf("%d\n", product);
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}
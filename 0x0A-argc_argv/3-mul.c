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
	int i, product = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			product = product * atoi(argv[i]);
		}
		printf("%d\n", product);
		return (0);
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}
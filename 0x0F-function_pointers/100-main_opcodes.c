#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * @argc: number of cmdline args
 * @argv: array of cmdlinbe args
 * Return: 0 if successful or 1 or 2 otherwise
*/

int main(int argc, char *argv[])
{
	int n_bytes, n;
	char *opcode = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n_bytes = atoi(argv[1]);

	if (n_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (n = 0; n < n_bytes; n++)
	{
		printf("02x", opcode[n] & 0xFF);
		if (n != n_bytes - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}

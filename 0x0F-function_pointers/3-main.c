#include "3-calc.h"

/**
 * main - entry point
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: 0 if successful otherwise exit
*/

int main(int argc, char *argv[])
{
	int n1, n2, result;
	int (*final)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	final = get_op_func(argv[2]);

	if (final == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = final(n1, n2);
	printf("%d\n", result);

	return (0);
}

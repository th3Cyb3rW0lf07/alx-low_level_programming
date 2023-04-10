#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiplication of two numbers
 * @argc: the argument count
 * @argv: the argument vector
 * Return: 0 if succesful
 */

int main(int argc, char *argv[])
{
	int n1, n2, product;

	if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	product = n1 * n2;
	printf("%d\n", product);
	return (0);
}

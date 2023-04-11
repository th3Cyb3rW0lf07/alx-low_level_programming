#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the amount of change
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 if succesful, otherwise 1
 */

int main(int argc, char *argv[])
{
	int cents, d, c = 0;

	int den[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (d = 0; d < 5 && cents >= 0; d++)
	{
		while (cents >= den[d])
		{
			cents -= den[d];
			c++;
		}
	}

	printf("%d\n", c);
	return (0);
}

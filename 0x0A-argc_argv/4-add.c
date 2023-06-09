#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds numbers and numbers only passed as args
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 if program runs correctly, 1 if otherwise
*/

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		char *num = argv[i];

		for (j = 0; num[j] != '\0'; j++)
		{
			if (!isdigit(num[j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(num);
	}

	printf("%d\n", sum);
	return (0);
}

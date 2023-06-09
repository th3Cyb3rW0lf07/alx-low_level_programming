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
	int i, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if(!isdigit(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("%d\n", 0);
	}
	return (0);
}

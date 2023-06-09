#include <stdio.h>

/**
 * main - prints the arguments to the progam,
 * each on a new line
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 if program runs successfully
*/

int main(int argc, char *argv[])
{
	int i;
	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}

	return (0);
}

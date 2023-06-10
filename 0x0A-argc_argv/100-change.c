#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculates the amount of change and number of coins to be given
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 if successful, 1 if otherwise
*/
int main(int argc, char *argv[])
{
	int cents, coins = 0;
	int coin25 = 25, coin10 = 10, coin5 = 5, coin2 = 2, coin1 = 1;

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

	while (cents > 0)
	{
		if (cents >= coin25)
			cents -= coin25;
		else if (cents >= coin10)
			cents -= coin10;
		else if (cents >= coin5)
			cents -= coin5;
		else if (cents >= coin2)
			cents -= coin2;
		else if (cents >= coin1)
			cents -= coin1;

		coins++;
	}

	printf("%d\n", coins);
	return (0);
}

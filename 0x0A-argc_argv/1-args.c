#include <stdio.h>

/**
 * main - prints the number of arguments to the program
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if program runs successfully
*/

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc);
}

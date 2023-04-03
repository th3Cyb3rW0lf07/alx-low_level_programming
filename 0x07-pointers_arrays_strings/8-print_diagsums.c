#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints out the sums of two diagonals in a square matrix
 * @a: pointer for matrix start
 * @size: matrix size
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int j, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (j = 0; j < (size * size); j += size + 1)
	{
		sum1 += *(a + j);
	}
	for (j = 0; j < (size * size - 1); j += size - 1)
	{
		sum2 += *(a + j);
	}
	printf("%d, %d\n", sum1, sum2);
}

#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Size of the memory to allocate
 * Return: Pointer to the allocated memory
 *
 * If malloc fails, the function terminates the process with a status value of 98
 */

void *malloc_checked(unsigned int b) {
	void *p = malloc(b);
	if (p == NULL) {
		exit(98);
	}
	return (p);
}

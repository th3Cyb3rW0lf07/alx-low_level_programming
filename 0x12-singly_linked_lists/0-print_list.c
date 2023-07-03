#include "lists.h"

/**
 * print_list - prints the elements of a list
 * @h: pointer to the head of the list
 * Return: the number of nodes in the list
*/

size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t nodeCount = 0;

	while (current != NULL)
	{
		if (current->str != NULL)
			printf("[%u] %s\n", current->len, current->str);
		else
			printf("[0] (nil)\n");

		current = current->next;
		nodeCount++;
	}

	return (nodeCount);
}

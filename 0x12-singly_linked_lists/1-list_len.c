#include "lists.h"

/**
 * list_len - prints out the number of elements in a list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes in the list
*/

size_t list_len(const list_t *h)
{
	const list_t *current = h;
	size_t nodeCount = 0;

	while (current != NULL)
	{
		current = current->next;
		nodeCount++;
	}

	return (nodeCount);
}

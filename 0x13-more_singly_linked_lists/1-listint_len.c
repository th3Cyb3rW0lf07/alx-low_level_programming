#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: the head of the list
 *
 * Return: the number of elements
*/

size_t listint_len(const listint_t *h)
{
	const listint_t *curr = h;
	size_t node_count = 0;

	while (curr != NULL)
	{
		curr = curr->next;
		node_count++;
	}

	return (node_count);
}

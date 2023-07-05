#include "lists.h"

/**
 * print_listint - prints the elements of a list
 * @h: the head of the list
 *
 * Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	const listint_t *curr = h;
	size_t node_count = 0;

	while (curr != NULL)
	{
		if (curr != NULL)
			printf("%d\n", curr->n);

		curr = curr->next;
		node_count++;
	}

	return (node_count);
}

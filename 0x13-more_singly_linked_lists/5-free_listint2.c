#include "lists.h"

/**
 * free_listint2 - frees the list and also sets head to NULL
 * @head: pointer to the head of the list
*/

void free_listint2(listint_t **head)
{
	listint_t *curr;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		curr = *head;
		*head = (*head)->next;
		free(curr);
	}
}

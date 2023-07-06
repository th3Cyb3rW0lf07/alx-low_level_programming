#include "lists.h"

/**
 * free_listint2 - frees the list and also sets head to NULL
 * @head: pointer to the head of the list
*/

void free_listint2(listint_t **head)
{
	listint_t *curr, *temp;

    if (head == NULL)
        return;

    curr = *head;

	while (*head != NULL)
	{
		temp = curr->next;
		free(curr);
		curr = temp;
	}

    *head = NULL;
}

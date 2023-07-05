#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a specified index
 * @head: pointer to the head of the list
 * @index: the specified index
 *
 * Return: 1 if successful, -1 otherwise
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *delete;
	listint_t *temp;
	unsigned int curr_index = 0;


	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;
	while (current != NULL && curr_index < index -1)
	{
		current = current->next;
		curr_index++;
	}

	if (current == NULL || current->next == NULL)
		return (-1);

	delete = current->next;
	current->next = delete->next;
	free(delete);
	return (1);
}

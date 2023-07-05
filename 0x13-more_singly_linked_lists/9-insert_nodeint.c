#include "lists.h"

/**
 * insert_nodeint_at_index - inserts an element
 * at a particular index in the list
 * @head: ponter to the head of the list
 * @idx: the index marker
 * @n: the integer to be added
 *
 * Return: the address of the new node or NULL if failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
	unsigned int curr_idx = 0;
	listint_t *newNode = (listint_t *)malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (*head == NULL || idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	current = *head;
	while (current != NULL && curr_idx < idx - 1)
	{
		current = current->next;
		curr_idx++;
	}

	if (current == NULL || curr_idx != idx - 1)
	{
		free(newNode);
		return (NULL);
	}

	newNode->next = current->next;
	current->next = newNode;

	return (newNode);
}

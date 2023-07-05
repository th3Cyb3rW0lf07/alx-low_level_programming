#include "lists.h"

/**
 * pop_listint - removes the head element of a list
 * @head: pointer to the head element fo the list
 *
 * Return: the head node's data
*/

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	temp = *head;

	*head = (*head)->next;

	free(temp);
	return (data);
}

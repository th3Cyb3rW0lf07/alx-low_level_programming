#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of the list
 * @head: pointer to the head of the list
 * @n: the integer to be added
 *
 * Return: the elements added at the end of the list
 *
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *curr;

	newNode = (listint_t *)malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		curr = *head;
		while (curr->next != NULL)
			curr = curr->next;
		curr->next = newNode;
	}

	return (newNode);
}

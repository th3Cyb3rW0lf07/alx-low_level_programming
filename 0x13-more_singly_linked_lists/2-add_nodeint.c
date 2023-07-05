#include "lists.h"

/**
 * add_nodeint - adds a node to the list
 * @head: pointer to the head of the list
 * @n: integer to be added
 *
 * Return: the address of the newly added element
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = (listint_t *)malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	newNode->next = *head;
	*head = newNode;

	return (newNode);
}

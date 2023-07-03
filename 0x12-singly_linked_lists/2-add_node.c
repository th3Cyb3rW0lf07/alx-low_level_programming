#include "lists.h"

/**
 * add_node - adds a node at the beginning of a list
 * @head: pointer to the head of the list
 * @str: the string to be added
 *
 * Return: address to the new element or null
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
		return (NULL);

	new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = 0;
	while (str[new_node->len] != '\0')
		new_node->len++;

	new_node->next = *head;

	*head = new_node;

	return (new_node);
}

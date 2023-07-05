#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: pointer to the head of the list
 * @index: the index to be gotten
 *
 * Return: Null if node doesn't exist
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int curr_index = 0;

	while (head != NULL)
	{
		if (curr_index == index)
		{
			return (head);
		}

		head = head->next;
		curr_index++;
	}

	return (NULL);
}

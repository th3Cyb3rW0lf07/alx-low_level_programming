#include "lists.h"

/**
 * sum_listint - sums up all elements of a list
 * @head: pointer to the head of the list
 *
 * Return: the sum of the elements
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

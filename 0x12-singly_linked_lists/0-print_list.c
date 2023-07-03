#include "lists.h"

/**
 *
*/

size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t nodeCount = 0;

	printf("[");
	while (current != NULL)
	{
		if (current->str != NULL)
			printf("%s",current->str);
		else
			printf("[0] (nil)");

		current = current->next;
		if (current != NULL)
			printf(", ");
		nodeCount++;
	}

	printf("]\n");
	return (nodeCount);
}

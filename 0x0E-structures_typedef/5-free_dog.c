#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees all dogs
 * @d: struct dog
 * Return: nothing
*/

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
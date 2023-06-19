#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializes the struct dog
 * @d: struct dog pointer
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}

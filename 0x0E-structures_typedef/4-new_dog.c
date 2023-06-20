#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Creates a new dog structure.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: Pointer to the newly created dog_t structure,
 *         or NULL if memory allocation fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int nameLength = 0;
	int ownerLength = 0;
	int i;
	dog_t *newDog;

	while (name[nameLength] != '\0')
		nameLength++;

	while (owner[ownerLength] != '\0')
		ownerLength++;

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);

	newDog->name = malloc((nameLength + 1) * sizeof(char));
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}

	newDog->owner = malloc((ownerLength + 1) * sizeof(char));
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}

	for (i = 0; i < nameLength; i++)
		newDog->name[i] = name[i];
	newDog->name[nameLength] = '\0';

	for (i = 0; i < ownerLength; i++)
		newDog->owner[i] = owner[i];
	newDog->owner[ownerLength] = '\0';

	newDog->age = age;
	return (newDog);
}

#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog's owner's name
 * Return: struct dog otherwise null
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newD;
	int n, len_name = 0, len_owner = 0;
	newD = malloc(sizeof(dog_t));

	if(newD == NULL)
	{
		return (NULL);
	}

	while (name[len_name] != '\0')
	{
		len_name++;
	}

	while (owner[len_owner] != '\0')
	{
		len_owner++;
	}

	newD->name = malloc(len_name + 1);
	newD->owner = malloc(len_owner + 1);

	if (newD->name == NULL || newD->owner == NULL)
	{
		free(newD->name);
		free(newD->owner);
		free(newD);

		return (NULL);
	}

	for (n = 0; n <= len_name; n++)
	{
		newD->name[n] = name[n];
	}

	for (n = 0; n <= len_owner; n++)
	{
		newD->owner[n] = owner[n];
	}

	newD->age = age;

	return (newD);

}

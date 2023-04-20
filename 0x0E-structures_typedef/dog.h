#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure that stores a dog's info
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 *
 * Description: a struct called dog that stores its name,
 * the age and the name of its owner
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

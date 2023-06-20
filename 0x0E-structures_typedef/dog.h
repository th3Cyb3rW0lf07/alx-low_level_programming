#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure representing a dog
 * @name: Pointer to the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to the name of the owner
 *
 * Description: This structure represents a dog with its name, age, and owner.
 * dog_t - typedef for struct dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;



void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

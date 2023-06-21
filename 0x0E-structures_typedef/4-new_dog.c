#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: a memory address
 * @age: a variable name
 * @owner: a memory address
 * Return: a pointer of type dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *id = name;
	char *have = owner;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc((sizeof(dog_t)));

	if (dog == NULL)
		return (NULL);
	free(dog);

	dog->name = id;
	dog->age = age;
	dog->owner = have;

	return (dog);
}

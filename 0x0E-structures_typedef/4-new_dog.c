#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog- creates a pointer to new struct
 * @name: name parameter
 * @age: age parameter of float type
 * @owner: owner's name variable
 * Return: dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = (dog_t *)malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = strdup(name);
	dog->owner = strdup(owner);

	if (dog->name == NULL || dog->owner == NULL)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}

	dog->age = age;

	return (dog);
}

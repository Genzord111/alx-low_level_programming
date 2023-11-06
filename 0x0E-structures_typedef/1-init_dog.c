#include "dog.h"


/**
* init_dog - initializes a struct dog
* @d: new variable of struct type dog
* @name: name parameter
* @age: age of dog
* @owner: stores the owner's name
* Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

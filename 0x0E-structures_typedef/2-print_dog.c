#include "dog.h"
#include <stdio.h>

/**
 * print_dog- check the and prints a new datatype
 * @d: variable of type dog
 * Return: void.
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
		{
			printf("Name: %s\n", d->name);
		}

		if (d->age == 0.000000)
			printf("Age: (nil)\n");
		else
			printf("Age: %f\n", d->age);

		if (d->name == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}

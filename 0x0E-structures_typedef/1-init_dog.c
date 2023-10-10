#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - TO initialise
 * @d: Dog to initialize
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 * Return: Success
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

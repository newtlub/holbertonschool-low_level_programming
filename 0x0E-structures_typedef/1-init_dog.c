#include "dog.h"

/**
 * init_dog - initialize a new var of struct dog with provided vars
 *
 * @d: name of the new instance of the struct type
 * @name: name to store in the new struct
 * @age: age float of dog
 * @owner: string of owner name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}

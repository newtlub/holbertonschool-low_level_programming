#include "dog.h"

/**
 * free_dog - frees the memory of a dog
 * @d: which dog struct to free
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

#include "dog.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_dog - prints a stuct of type dog
 *
 * @d: dog structure to print
 */

void print_dog(struct dog *d)
{

	if (!d)
	{
		return;
	}
	else
	{
		if (d->name == NULL)
			d->name = "(nil)";

		if (d->owner == NULL)
			d->owner = "(nil)";
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}

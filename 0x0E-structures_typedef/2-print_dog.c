#include "dog.h"

/*******/

void print_dog(struct dog *d)
{

	if (d)
	{
		if (d.name == NULL)
			printf("Name: (nil)");
		else
			printf("Name: %s", d.name);

		if (d.age == NULL)	
			printf("Age: (nil)", d.age);

		else printf("Age: %.6f", d.age);
		
		if (d.owner == NULL)

			printf("Owner: (nil)");
		else
			printf("Owner: %s", d.owner);
	
	}
	else
	 printf(NULL);
}

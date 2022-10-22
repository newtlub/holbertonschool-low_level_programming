#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a struct storing name age and owner
 *
 * @name: name of dog
 * @age: age of the puppo
 * @owner: owner of the doggy
 *
 * Description: This is a struct of two strings and a float
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

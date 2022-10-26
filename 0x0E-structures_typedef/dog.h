#ifndef DOG_H
#define DOG_H

/*
 * libraries - to include for these projects
 */

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

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

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif

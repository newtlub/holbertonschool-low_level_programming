#include "dog.h"

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - finds the length of a string
 * @s: string to measure
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * *_strcpy - function to copy a string
 * @src: source of string
 * @dest: destination where string will be copied
 * Return: returns pointer to where the string is stored
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new doggy!
 * @name: name of dog
 * @age:  age of dog
 * @owner: owner of dog
 * Return: points to the new doggy
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i, j;

	i = _strlen(name);
	j = _strlen(owner);

	dog = malloc(sizeof(dog_t));

	if (!(dog))
	{
		return (NULL);
	}

	dog->name = malloc(sizeof(char) * (i + 1));

	if (!(dog->name))
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (j + 1));

	if (!(dog->owner))
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	_strcpy(dog->name, name);
	dog->age = age;
	_strcpy(dog->owner, owner);

	return (dog);

}

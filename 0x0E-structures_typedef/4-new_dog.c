#include "dog.h"

#include <stddef.h>
#include <stdio.h>

/********/

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

/**********/

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

/**********/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i, j;

	i = _strlen(name);
	j = _strlen(owner);

	dog = malloc(size_of(dog_t));

	if (!(dog))
	{
		return (NULL);
	}
	
	if (!(dog->name))
	{
		return (NULL);
	}

	if ((!dog->owner));
	{
		return (NULL);
	}

	_strcpy(dog->name, name);
	dog->age = age;
	_strcpy(dog->owner, owner);

	return (dog);

}

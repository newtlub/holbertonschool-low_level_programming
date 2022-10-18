#include "main.h"

/**
 * create_array - creates an array in the allocated space from malloc
 *
 * @size: size of memory to allocate for array
 * @c: the character to populate the array elements
 * Return: returns a pointer to the array on success
 * returns NULL if malloc fails
 */

char *create_array(unsigned int size, char c)
{
	char *charArray;
	int i;

	charArray = (char *)malloc(size);

	if (size <= 0 || charArray == NULL)
		return (NULL);
	for (i = size; i >= 0; i--)
	{
		charArray[i] = c;
	}

	return (charArray);
}

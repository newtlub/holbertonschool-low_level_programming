#include "main.h"

/**
 * malloc_checked - uses the malloc function to allocate memory and
 * checks that it ran successfully in the same function
 *
 * @b: size in bytes of memory to allocate
 * Return: a pointer to the allocated memory otherwise exit with 98
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = (void *)malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}

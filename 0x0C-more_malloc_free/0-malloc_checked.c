#include "main.h"

/**
 *
 *
 *
 *
 *
 *
 *
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = (int *)malloc(b);

	if (ptr == NULL)
		return(98);

	return (ptr);
}

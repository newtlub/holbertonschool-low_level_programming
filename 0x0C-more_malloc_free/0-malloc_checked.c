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
	
	ptr = &b(malloc(10 * 4));

	if (ptr == NULL)
		return(NULL);

	return (b);
}

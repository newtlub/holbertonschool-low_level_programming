#include "main.h"

/**
 * swap_int - swaps two int values using pointers
 *
 * @a: 1st int pointer
 * @b: 2nd int pointer
 */
void swap_int(int *a, int *b)
{
	int temp1 = *a;
	int temp2 = *b;
	*b = temp1;
	*a = temp2;
}

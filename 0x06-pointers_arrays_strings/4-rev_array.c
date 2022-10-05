#include "holberton.h"

/**
 * reverse_array - Reverses an array of integers
 * @a: Provided array to perform function on.
 * @n: Elements in the array.
 */
void reverse_array(int *a, int n)
{
	int i, j, x;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		x = a[i];
		a[i] = a[j];
		a[j--] = x;
	}
}

#include "main.h"

/**
 * _sqrt_recursion - find the square root of an int using recursion
 * root - this function is repeated through recursions to calculate sqrt
 *
 * @n - main int provided
 * @rt - tracks the root of the int
 * 
 * Return: returns the sqrt of the provided int n
 */

int root(int n, int rt)
{
	if ((rt * rt) == n)
		return (rt);
	if (rt == n / 2)
		return (-1);
	return (root(n, rt + 1));
}

int _sqrt_recursion(int n)
{
	int rt = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (root(n, rt));
}

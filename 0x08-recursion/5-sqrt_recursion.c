#include "main.h"

/**
 * root - handles the arithmatic calculating the sqrt
 *
 * @n: main int provided
 * @rt: tracks the root of the int
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

/**
 * _sqrt_recursion - find the square root of an int using recursion
 *
 * @n: int to calculate sq root of
 * Return: returns the output of the root function
 */

int _sqrt_recursion(int n)
{
	int rt = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (root(n, rt));
}

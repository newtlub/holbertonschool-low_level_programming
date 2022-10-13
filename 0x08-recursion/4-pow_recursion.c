#include "main.h"

/**
 * _pow_recursion - Finds the value of x to the value of y
 *
 * @x: value x
 * @y: to the power of y
 * Return: the value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	int a = x;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	a *= _pow_recursion(x, (y - 1));
	return (a);
}

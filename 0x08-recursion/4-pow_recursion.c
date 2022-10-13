#include "main.h"

/**
 * _pow_recursion - Finds the value of x to the value of y
 *
 * @x: value x
 * @y: to the power of y
 * Returns: the value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	x = x * x;

	return (_pow_recursion(x, y - 1));
}

#include "main.h"

/**
 * _abs - find the absolute value of the int provided
 *
 *
 * @n: integer provided to convert from negative to positive.
 * Return: (0)
 */

int _abs(int n)
{
	if (n < 0)
	{
	n = (n * -1);
	_putchar(n + '0');
	}
	else
	{
	_putchar(n + '0');
	}
	return (0);
}

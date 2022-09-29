#include "main.h"

/**
 * print_to_98 - incriments provided int to 98 while printing each number
 *
 * @n: provided int for function
 */

void print_to_98(int n)
{
	if (n != 98)
	{
		while (n < 98)
		{
			_putchar((n) + '0');
			_putchar((n) + '0');
			_putchar((n) + '0');
			n++;
		}
		while (n > 98)
		{
			_putchar((n) + '0');
			_putchar(',');
			_putchar(' ');
			n--;
		}
	}
	else
	{
		_putchar((n) + '0');
	}
	_putchar('\n');
}

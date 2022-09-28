#include "main.h"

/**
 * print_square - prints out a square to the dimensions from provided int
 *
 * @size: provided value that determines the size of the square
 */

void print_square(int size)
{
	int i, x, n;
	
	n = size;
	i = n;
	if (n > 0)
	{
		for (i = n; i > 0; i--)
		{
			x = n;
			while (x > 0)
			{
				_putchar('#');
				x--;
			}
			_putchar('\n');
		}
	}
	else
	{
	_putchar('\n');
	}
}

#include "main.h"

/**
 * print_triangle - prints a triangle with the provided size parameters
 *
 * @size: size int where user provides size of the triangle
 */

void print_triangle(int size)
{
	int i, x, h, s;

	s = size;
	i = s;
	if (s > 0)
		{
		for (i = s; i > 0; i--)
		{
		x = i;
		while (x > 1)
		{
			_putchar(' ');
			x--;
		}
		h = i;
		while (h < s)
		{
			_putchar('#');
			h++;
		}
		_putchar('#');
		_putchar('\n');
		}
		}
	else
	{
		_putchar('\n');
	}
}

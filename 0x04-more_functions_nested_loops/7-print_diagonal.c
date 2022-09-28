#include "main.h"

/**
 * print_diagonal - prints a diagonal line based on variable provided
 *
 * @n: number of times the times a diagonal line should be printed
 */

void print_diagonal(int n)
{
	int i, j;

	i = n;
	if (n > 0)
	{
		for (i = n; i > 0; i--)
		{
			j = i;
			while (j < n)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}

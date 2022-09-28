#include "main.h"

/**
 * print_diagonal - prints a diagonal line based on variable provided
 *
 * @n: number of times the times a diagonal line should be printed
 * @i: variable to track loops
 * @j: variable to control the amount of spaces printed on each line
 */

void print_diagonal(int n)
{
	int i,j;
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

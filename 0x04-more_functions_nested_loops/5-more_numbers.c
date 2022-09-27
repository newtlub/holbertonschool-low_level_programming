#include "main.h"
/**
 * more_numbers - prints the numbers 0 - 14 in ten lines
 *
 * @i - counts from 0-14 printing each
 * @j - runs the printing of 0-14 ten times
 */

void more_numbers(void)
{
	int i;
	int j;

	for (j = 1; j <= 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
				_putchar('1');
			_putchar((i) % 10 + '0');
		}
		i = 0;
		_putchar('\n');
	}
}

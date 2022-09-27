#include "main.h"

/**
 * print_most_number - prints numbers in range 0-9 unless its 2 or 4
 *
 *
 */

void print_most_number(void)
{
	int i;

	while (i < 10)
	{
		if (i != 2 || i != 4)
			_putchar(('0') + i);
	i++;
	_putchar('\n');
	}
}

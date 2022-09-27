#include "main.h"

/**
 * print_most_number - prints numbers in range 0-9 unless its 2 or 4
 *
 *
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
			i++;
		_putchar((i)+ '0');
		if (i == 9)
			_putchar('\n');
	}
}

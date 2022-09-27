#include "main.h"

/**
 * times_table - prints out a multiplcation table up until 9
 *
 * @a - tracking loops through till 9 & prints first 3 characters
 * @b - prints out second digit if applicable and prints the math
 * @c - variable used to calculate the math
 * Return: function prints table as it runs (0)
 */

void times_table(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a < 10; a++)
	{
		for (b = 1; b < 10; b++)
		{
			c = (b * a);
			if (c == 0)
			{
				_putchar('0' + c);
			}
			else if (c < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(c + '0');
			}
			else if (c < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
		}
	_putchar('\n');
	}
}

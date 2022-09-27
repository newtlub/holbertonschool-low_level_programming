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
	_putchar('0');
	_putchar(',');
	_putchar(' ');
		for (b = 1; b < 10; b++)
		{
		c = (a * b);
		if (c < 10)
		{
		_putchar(' ');
		}
		else
		{
		_putchar((c / 10) + '0');
		}
		_putchar((c % 10) + '0');
		}
	a++;
	_putchar('\n');
	}
}

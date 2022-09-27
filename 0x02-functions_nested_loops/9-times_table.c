#include "main.h"

/**
 * times_table - prints out a multiplcation table up until 9
 *
 * @a - variable used to track the rows of lines & use in arithmatic 
 * @b - variable to track columns & use in arithmatic
 * @c - used to store result of arithmatic and print based on value
 * Return: function prints table as it runs (0)
 */

void times_table(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = (a * b);
			if (c == 0)
			{
				if (a > 0)
				{
					_putchar(' ');	
				}
				else
				{
					for (c = 0; c < 1; c++)
					{
					_putchar('0' + c);
					_putchar(',');
					_putchar(' ');
					}
					c = 0;
				}
			}
			else if (c <= 9)
			{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(c + '0');
			}
			else if (c > 9)
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

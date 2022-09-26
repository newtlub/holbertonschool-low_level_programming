#include "main.h"

/**
 * jack_bauer: A function loop the prints hours and minutes
 *
 * @h -  represent hours
 * @m -  used to track loops and represent minutes
 * Return: (0) as command runs it prints out
 */

void jack_bauer(void)
{
	int h = 0;
	int m = 0;

	while (h < 24)
	{
		while (m < 60)
		{
		_putchar((h / 10) + '0');
		_putchar((h % 10) + '0');
		_putchar(':');
		_putchar((m / 10) + '0');
		_putchar((m % 10) + '0');
		_putchar('\n');
		m++;
		}
	h++;
	m = 0;
	}
}

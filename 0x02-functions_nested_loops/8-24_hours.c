#include "main.h"

/**
 * jack_bauer: A function the prints from 00:00 to 23:59
 *
 *
 * Return: (0) as command runs it prints out
 */

void jack_bauer(void)
{
	int h;
	int m;
	
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
	}	

}

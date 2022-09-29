#include "main.h"

/**
 * print_rev - prints the string provided reveresed
 *
 * @s: string input
 */
void print_rev(char *s)
{
	int a = 0;

	while (*(s + a) != '\0')
	{
		a++;
	}
	a--;
	while (a > -1)
	{
		_putchar(*(s + a));
		a--;
	}
	_putchar('\n');
}

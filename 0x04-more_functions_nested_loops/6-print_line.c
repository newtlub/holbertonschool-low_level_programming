#include "main.h"

/**
 * print_line - prints line as long as the value n
 *
 * @n: how long the line will print
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	if (n <= 0)
		_putchar('\n');

}

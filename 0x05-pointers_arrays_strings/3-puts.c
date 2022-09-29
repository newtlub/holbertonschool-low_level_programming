#include "main.h"

/**
 * _puts - prints a provided string
 *
 * @str: string input
 */
void _puts(char *str)
{
	int a = 0;

	while (*(str + a) != '\0')
	{
		_putchar(*(str + a));
		a++;
	}
	_putchar('\n');
}

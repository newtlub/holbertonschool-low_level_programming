#include "main.h"

/**
 * puts_half - prints only the later half of a string
 *
 * @str: string input
 */
void puts_half(char *str)
{
	int a = 0;
	int b;

	while (*(str + a) != '\0')
	{
		a++;
	}
	for (b = ((a + 1) / 2); b < a; b++)
	{
		_putchar(*(str + b));
	}
	_putchar('\n');
}

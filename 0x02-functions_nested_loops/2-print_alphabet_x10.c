#include "main.h"

/**
 * print_alphabet_x10 - prints out the alphabet 10 times
 *
 *
 * Return: on success(0)
 */

void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
		_putchar(ch);
		}

	_putchar('\n');

	}
}

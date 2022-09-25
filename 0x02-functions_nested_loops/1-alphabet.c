#include "main.h"

/*
 * print_alphabet - a function that prints out the alphabet
 *
 * Return: on success (0)
 */



void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}

	_putchar('\n');
}

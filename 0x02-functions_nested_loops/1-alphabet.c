#include "main.h"

/*
 *	print_alphabet - prints out the alphabet using the print_alphabet
 *	function
 *
 *	Return: on success (0)
 */



void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}

	_putchar('\n');
	return;
}

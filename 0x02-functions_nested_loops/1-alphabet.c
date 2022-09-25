#include "main.h"

/*
 *	main - prints out the alphabet using the print_alphabet
 *	function
 *
 *	print_alphabet - prints alphabet in lowercase
 *
 *	Return: on success (0)
 */

void print_alphabet(void)
{
	char c;
	int _putchar;

	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
	return;
}

int main(void)
{
	return (0);
}

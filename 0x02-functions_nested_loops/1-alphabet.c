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

	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
	return;
}

int main(void)
{
	print_alphabet();
	return (0);
}

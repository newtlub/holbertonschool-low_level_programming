#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse using recursion
 *
 * @s: String provided for function
 * Return: returns reversed string.
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	_print_rev_recursion(*s + 1);
	_putchar("%s", s);

}

#include "main.h"

/**
 * _puts_recursion - Prints a string using recursion
 *
 * @s: String provided for function
 * Return: (0) if successful
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

}

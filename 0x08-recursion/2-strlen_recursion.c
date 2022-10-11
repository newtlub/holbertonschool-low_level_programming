#include "main.h"

/**
 * _strlen_recursion - returns the length of a string using recursion
 *
 * @s: provided string to calulate the length of
 * Return: The length of the string. else (0)
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
	return (0);
	}
	return (_strlen_recursion(s + 1));


}

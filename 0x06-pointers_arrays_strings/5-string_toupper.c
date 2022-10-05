#include "holberton.h"

/**
 * string_toupper - Replaces all lowercase chars with uppercase
 * @s: string to change
 *
 * Return: returns the modified string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}

	return (s);
}

#include "holberton.h"

/**
 * _strcmp - Compares two strings
 * @s1: first string in comparison
 * @s2: second string in comparison
 *
 * Return: -0 if s1 is less than s2, 0 if they're the same,
 * more than 0 if s1 is bigger than s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

#include "main.h"

/**
 * _memset - creates a buffer
 *
 * @s: the area in memory to perform the function
 * @b: byte constant to populate with
 * @n: amount of bytes to fill
 * Return: pointer to the address of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

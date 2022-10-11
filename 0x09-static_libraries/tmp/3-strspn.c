#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: string to perform the function on
 * @accept: string containing the list of characters to match
 *
 * Return: returns the number of bytes that match
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int b = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				b++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (b);
		}
		s++;
	}
	return (b);
}

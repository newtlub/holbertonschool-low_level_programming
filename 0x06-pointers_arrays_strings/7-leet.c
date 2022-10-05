#include "holberton.h"

/**
 * *leet - Sonverts provided text to leetspeak
 * @s: input string
 * Return: returns modified string
 */
char *leet(char *s)
{
	int i, j = 0;
	char alphArr[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char leetArr[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; s[i]; i++)
		for (j = 0; j < 10; j++)
			if (s[i] == alphArr[j])
				s[i] = leetArr[j];
	return (s);
}

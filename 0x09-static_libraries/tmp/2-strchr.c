#include "holberton.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: string to search
 * @c: character that function is searching for
 * Return: points to first char or NULL if none
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	int j = 0;

	while (s[i])
	{
		i++;
	}
	while (j <= i)
	{
		if (s[j] == c)
		{
			s += j;
			return (s);
		}
		j++;
	}
	return (NULL);
}

#include "holberton.h"

/**
 * _strcat - appends the src string to dest string
 *
 * @i - used to track string element
 * @j - used to track src string element
 * Return: pointer to dest string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
	}
	_putchar("\n");
	return (dest);
}

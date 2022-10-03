#include "holberton.h"

/**
 * _strcat - appends the src string to dest string
 *
 * @dest: this string is used as the output of the function
 * @src: this is the src string which is added to the end of dest
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
		i++;
	}

	return (dest);
}

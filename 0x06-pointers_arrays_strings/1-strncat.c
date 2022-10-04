#include "main.h"

/**
 * _strncat - uses the provided strings and appends src to dest 
 *
 * @dest: string to append other string too.
 * @src: provides the string to append to the other string
 * @n: amount of bytes that should be copied from src
 * Return: returns the appended string (dest)
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i])
	{
		i++;
	}
	while (j < n && src[j])
	{
		i++;
		j++;
	}
	dest[i] = '\0'
return (dest);
}

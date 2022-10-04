#include "holberton.h"

/**
 * _strncpy - copies the specified amount of characters from src to dest
 *
 * @dest: where the string is to be copied to
 * @src: what string is to be copied over
 * @n: amount of characters to copy over
 * Return: pointer to the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);



}

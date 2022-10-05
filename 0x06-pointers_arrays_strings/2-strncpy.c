#include "holberton.h"

/**
 * _strncpy - copies the specified amount of characters from src to dest
 *
 * @dest: where the string is to be copied to
 * @src: what string provides the characters
 * @n: amount of characters
 * Return: pointer to the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);


}

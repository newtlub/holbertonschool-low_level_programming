#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 *
 * @dest: memory area where the copied bytes will be stored
 * @src: hosts the data to be copied over to dest
 * @n: number of bytes to be copied
 *
 * Return: gives a pointed to dest (dest)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

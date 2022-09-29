#include "main.h"

/**
 * *_strcpy - function to copy a char array
 *
 * @src: source of chararr
 * @dest: destination of char array
 * Return: destination of output
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (*(src + a))
	{
		*(dest + a) = *(src + a);
		a++;
	}
	dest[a] = '\0';
	return (dest);
}

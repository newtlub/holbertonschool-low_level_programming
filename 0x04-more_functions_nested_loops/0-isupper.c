#include "main.h"

/**
 * _isupper - checks if the ascii value of c is between 65-90
 *
 * Return: 1 if is upper alphabetical 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c >= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

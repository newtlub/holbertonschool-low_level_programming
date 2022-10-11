#include "main.h"

/**
 * _isdigit - checking if c is in the range of digits 0-9
 *
 * @c: is the provided variable
 * Return: 1 if the provided var is in range 0 othewise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

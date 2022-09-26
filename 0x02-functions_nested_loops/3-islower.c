#include "main.h"

/**
 * _islower - determines if the character is a lowercase alpha
 * character
 *
 * Return: if lowercase return (1) otherwise return (0)
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

#include "main.h"

/**
 * _isalpha: tells you if a character is 
 *
 * Return: 1 or 0 depending on if the character is an alphabet character
 */

int _isalpha(int c);
{
	if (c >= 'A' && c >= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}

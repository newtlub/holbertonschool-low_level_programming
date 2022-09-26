#include "main.h"

/**
 * print_last_digit - Displays the last digit of a number
 *
 * @n: int n represents the value to perform the function on
 * Return: Returns the value of the last digit
 */

int print_last_digit(int n)
{
	n = n % 10;
	_putchar(n + '0');
	return (n);
}

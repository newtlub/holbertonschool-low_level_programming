#include "main.h"

/**
 * print_sign - prints +, 0, - depending on the number provided
 *
 *
 *
 * @n: number provided when running the function
 * Return: + if greater than 0, 0 if equal to zero, and - if less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	_putchar(',');
	_putchar(' ');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	_putchar(',');
	_putchar(' ');
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar('-');
	_putchar(',');
	_putchar(' ');
	_putchar('/');
	return (-1);
	}



}

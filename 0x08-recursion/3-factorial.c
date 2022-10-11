#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 *
 * @n: number provided for function to run
 * Return: (0)
 *
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (factorial(n - 1) - 1);

}

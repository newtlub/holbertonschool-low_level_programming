#include "variadic_functions.h"

/**
 * sum_them_all - takes in a variable list of ints and adds them all together
 *
 * @n: amount of arguments in the function
 * Return: prints the variable storing the sum, if n is zero returns (0)
 */

int sum_them_all(const unsigned int n, ...)
{
	int i, sumall;
	va_list args;

	va_start(args, n);

	sumall = 0;

	if (n == 0)
		return (0);

	for (i = 0; i < (int) n; i++)
	{
		sumall = sumall + va_arg(args, int);
	}
	va_end(args);

	return (sumall);
}

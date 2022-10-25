#include "variadic_functions.h"

/**************/

int sum_them_all(const unsigned int n, ...)
{
	int i, sumall;
	va_list args;

	va_start (args, n);

	sumall = 0;

	if (n == 0)
		return (0);

	for (i = 0; i < (int) n; i++)
	{
		sumall = sumall + va_arg(args, int);
	}
	va_end(args);

	return(sumall);
}

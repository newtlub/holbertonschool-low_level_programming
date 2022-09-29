#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - incriments provided int to 98 while printing each number
 *
 * @n: provided int for function
 */

void print_to_98(int n)
{
	if (n != 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("%d", n);
	printf("\n");
}

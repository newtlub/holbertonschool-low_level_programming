#include <stdio.h>

/**
 *	main - prints out 0-9 followed by a comma
 *
 *
 *	Return: on success(0)
 */

int main(void)
{
	int i;

		for (i = 0; i <= 9; i++)
		putchar((i % 10) + '0');
	putchar(',');

	putchar('\n');
	return (0);
}

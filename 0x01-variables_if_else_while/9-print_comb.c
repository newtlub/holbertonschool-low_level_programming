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

	while (i < 10)
	{
		putchar((i % 10) + '0');
		if (i < 9)
		putchar(',');
		putchar(' ');
		i++;
	}

	putchar('\n');
	return (0);
}

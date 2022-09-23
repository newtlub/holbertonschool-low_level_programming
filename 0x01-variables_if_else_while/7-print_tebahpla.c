#include <stdio.h>

/**
 *	main - prints out the lowercase alphabet in reverse
 *
 *
 *	Return: on success (0)
 */

int main(void)
{
	char ch;

	for (ch = 'z' ; ch >= 'a' ; ch--)

	putchar(ch);

	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 *  main - printing out alphabet in lowercase followed by uppercase
 *
 *  Return: on success (0)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}

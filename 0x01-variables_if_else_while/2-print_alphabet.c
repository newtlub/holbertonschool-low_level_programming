#include <stdio.h>

/**
 *	main - prints out the alphabet in lower case
 *	only using a for loop and the putchar function
 *
 *	Return: always ends program
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}

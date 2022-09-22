#include <stdio.h>

/**
 *	main - prints out the alphabet unless
 *	it is the character q or e
 *	Return: on success (0)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	if (ch == 'e')
	{
		ch++;
	}
	else if (ch == 'q')
	{
		ch++;
	}
	putchar(ch);
	}
	putchar('\n');
	return (0);
}

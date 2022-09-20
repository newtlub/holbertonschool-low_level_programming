#include <stdio.h>

/**
 *	main - prints out the alphabet in lower case
 *	only using a for loop and the putchar function
 *
 *	Return: always ends program
 */

int main(void)
{
	for (int x = 'A'; x <= 'Z'; x++)
	{
	int lower_x = tolower(x);

	putchar(lower_x)
	}
	return (0);
}

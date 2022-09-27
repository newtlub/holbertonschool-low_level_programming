#include <stdio.h>

/**
 * main - runs a for loop 1-100 that prints out Fizz for multiples of 3,
 * Buzz for multiples of 5, and FizzBuzz for multiples of both.
 *
 * Return: nothing (0)
 */
int main(void)
{
	int i;
	int s;
	s = 0;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if ((i % 3) == 0)
			printf("Fizz");
		else if ((i % 5) == 0)
			printf("Buzz");
		else
			printf("%d", i);
	if (i != 100)
		printf(" ");
	}
return (0);
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *	main - generates a random number, finds the last digit,
 *	and prints a msg based on what the digit is
 *
 *	Return: always 0
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	ld = n % 10;
	printf("Last digit of %d is %d", n, ld)
	if (ld > 5)
	{
		printf("and is greater than 5\n")
	}
	else if (ld > 6 && ld != 0)
	{
		printf("and is less than 6 and not 0\n")
	}
	else
	{
		printf("and is 0\n")
	}
	return (0);
}

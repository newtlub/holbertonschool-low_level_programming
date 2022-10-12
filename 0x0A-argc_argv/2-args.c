#include "main.h"
#include <stdio.h>

/**
 * main - Prints out each string of arguments in cmd line
 *
 * @argc: is the amount of arguments there are
 * @argv: is the string of arguments stored in an array
 * Return: always (0) it prints out the results
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
		printf("\n");
	}
	return (0);
}

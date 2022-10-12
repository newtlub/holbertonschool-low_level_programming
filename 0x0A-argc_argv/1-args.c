#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it
 *
 * @argc: amount of arguments in cmd line when exe is run
 * @argv: array of strings of each argument in cmd line
 * Return: always (0)
 */

int main(int argc, char **argv)
{
	printf("%d\n", (argc - 1));
	if (argc || argv)
	{
		/*yuh*/
	}
	return (0);
}

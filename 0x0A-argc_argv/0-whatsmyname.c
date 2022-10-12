#include <stdio.h>
#include "main.h"

/**
 * main - prints out the programs name
 *
 * @argc: amount of command arguments enter in cmd line
 * @argv: array of strings entered in the cmd line
 * Return: always (0)
 */

int main(int argc, char *argv[])
{
	

	printf("%s\n", argv[0]);
	if (argc || argv)
	{
		/* BETTY SMELLY */
	}
	return (0);
}

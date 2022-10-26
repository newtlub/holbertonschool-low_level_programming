#include "function_pointers.h"

/**
 * print_name - takes a string and an arg to print to S/O
 *
 * @name: string of char to print
 * @f: pointer to desired function to print name
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}

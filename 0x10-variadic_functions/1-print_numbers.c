#include "variadic_functions.h"

/******/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;

	va_list args;
	va_start(args, n);

	for (i = 0; i <= (int) n; i++)
	{

		printf("%d", va_arg(args, int));
		if (i == (int) n - 1)
			break;
		if (separator != NULL)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}

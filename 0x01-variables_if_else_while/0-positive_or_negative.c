#include <stdlib.h>
#include <time.h>

/**
 *
 *
 *
 */
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n = 0)
		printf("%d is zero", n);
	elseif (n < 0)
		printf("%d is negative", n);
	else (n > 0)
		printf("%d is positive");
	return (0);
}

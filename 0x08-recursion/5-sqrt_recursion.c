#include "main.h"

/**********/

int root(int n, int rt)
{
	if ((rt * rt) == n)
		return (rt);
	if (rt == n / 2)
		return (-1);
	return (root(n, rt + 1));
}

int _sqrt_recursion(int n)
{
	int rt = n;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (root(n, rt));
}

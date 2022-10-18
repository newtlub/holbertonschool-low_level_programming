#include "main.h"

/**********/

char *create_array(unsigned int size, char c)
{
	char *charArray;
	int i;

	charArray = (char*)malloc(size);

	if (size <= 0 || charArray == NULL)
		return (NULL);
	for (i = size; i >= 0; i--)
	{
		charArray[i] = c;
	}

	return (charArray);
}

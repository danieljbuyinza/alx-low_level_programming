#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Given integer
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(sizeof(int) * b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}


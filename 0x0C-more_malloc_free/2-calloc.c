#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array using malloc
 * @nmemb: Number of elements
 * @size: Given size
 * Return: Pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	char *ch_ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	ch_ptr = ptr;

	for (i = 0; i < nmemb * size; i++)
		ch_ptr[i] = 0;

	return (ptr);
}


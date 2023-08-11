#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array using malloc
 * @nmemb: Number of elements
 * @size: Number of bytes
 *
 * Return: Pointer to allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	unsigned int i;
	char *char_ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(size * nmemb);
	if (arr == NULL)
		return (NULL);

	char_ptr = arr;

	for (i = 0; i < nmemb * size; i++)
		char_ptr[i] = 0;

	return (arr);
}

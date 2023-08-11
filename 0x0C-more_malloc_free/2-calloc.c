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

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(size * nmemb);
	if (arr == NULL)
		return (NULL);

	return (arr);
}

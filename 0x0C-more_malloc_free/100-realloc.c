#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the memory block to reallocate
 * @old_size: Size of the old memory block
 * @new_size: Size of the new memory block
 * Return: Pointer to the reallocated memory block
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}

	if (new_size <= old_size)
		return (ptr);

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	char *char_ptr = (char *)ptr;
	char *char_new_ptr = (char *)new_ptr;

	for (i = 0; i < old_size; i++)
		char_new_ptr[i] = char_ptr[i];

	free(ptr);

	return (new_ptr);
}


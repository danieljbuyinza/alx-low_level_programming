#include <stdlib.h>

/**
 * create_array - Creates array of chars, initializes it with specific char
 * @size: Size of the memory space
 * @c: Given char
 *
 * Return: Pointer to the array
*/
char *create_array(unsigned int size, char c)
{
	char *array_of_chars;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array_of_chars = malloc(sizeof(char) * size);
	if (array_of_chars == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array_of_chars[i] = c;
	}

	return (array_of_chars);
}


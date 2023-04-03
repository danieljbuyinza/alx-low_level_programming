#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - Creates an array of chars, and initializes it with a specific char
 * @size: Size of memory
 * @c: Character
 *
 * Returns: char
*/

char *create_array(unsigned int size, char c)
{
	char *arr = malloc(sizeof(char) * size);

	arr[0] = c;

	if (size == 0 || arr == NULL)
		return (NULL);

	return arr;
}


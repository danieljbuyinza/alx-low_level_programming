#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - Creates array of chars and initializes it with specific char
 * @size: Size of memory
 * @c: Character
 *
 * Return: char
*/

char *create_array(unsigned int size, char c)
{
	char *arr = malloc(sizeof(char) * size);
	int x;

	for (x = 0; x < size; x++)
	arr[x] = c;

	if (size == 0 || arr == NULL)
		return (NULL);

	return (arr);
}


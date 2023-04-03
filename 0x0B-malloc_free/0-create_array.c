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
	int x;
	char *arr_ptr;

	if (size == 0)
		return (NULL);
	
	x = malloc(sizeof(int) * size);

	char arr[x] = "";

	arr[0] = c;
	arr_ptr = arr;
	return arr_ptr;
}


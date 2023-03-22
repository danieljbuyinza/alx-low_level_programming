#include <stddef.h>

/**
 * array_iterator - Executes a function on each element of an array
 * @array: Array
 * @size: Size of the array
 * @action: Pointer to the function
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t n;

	if (array != NULL && action != NULL)
	{
		for (n = 0; n < size; n++)
			action(array[n]);
	}
}


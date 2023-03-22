#include <stdio.h>

/**
 * array_iterator - Executes a function given as a parameter on each element of an array
 * @array: Array
 * @size: Size of the array
 * @action: Pointer to the function
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL and action != NULL)
	{
		int n;

		for (n = 0; n < size; n++)
		{
			action(array[n]);
		}
	}
}


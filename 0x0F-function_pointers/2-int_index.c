#include <stddef.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array
 * @array: Array of integers
 * @size: Number of elements in array
 * @cmp: Pointer to the comparison function
 * Return: Index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}


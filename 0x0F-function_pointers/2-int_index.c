#include <stdio.h>

/**
 * int_index - Searches for an integer
 * @array: Array
 * @size: Size of the array
 * @cmp: Pointer to the function
 *
 * Return: int
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	int n;

	for (n = 0; n < size; n++)
	{
		if (cmp(array[n] != 0)
			return (n);
		}
	}

	return (-1);
}


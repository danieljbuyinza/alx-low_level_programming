#include <stdio.h>
#include "main.h"

/**
 * array_range - Creates an array of integers
 * @min: Given minimum
 * @max: Given maximum
 *
 * Return: Pointer to newly created array
*/

int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
		return (NULL);

	ptr = malloc(max - min);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		ptr[i] = min;
		min++;
	}

	return (ptr);
}


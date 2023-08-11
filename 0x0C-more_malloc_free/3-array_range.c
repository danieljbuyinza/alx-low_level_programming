#include <stdlib.h>

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

	ptr = malloc(sizeof(int) * ((max - min) + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (max - min) + 1; i++)
	{
		ptr[i] = min;
		min++;
	}

	return (ptr);
}


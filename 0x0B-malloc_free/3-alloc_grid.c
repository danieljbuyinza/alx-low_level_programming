#include <stdlib.h>

/**
 * alloc_grid - Returns pointer to 2 dimensional array of integers
 * @width: Given width
 * @height: Given height
 *
 * Return: Pointer 2 dimensional array of integers
*/
int **alloc_grid(int width, int height)
{
	int **elements, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	elements = malloc(sizeof(int *) * height);

	if (elements == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		elements[i] = malloc(sizeof(int) * width);

		if (elements[i] == NULL)
		{
			free(elements);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			elements[i][j] = 0;
	}

	return (elements);
}


#include <stdlib.h>

/**
 * free_grid - Frees 2 dimensional array/grid
 * @grid: Given array/grid
 * @height: Given height
*/
void free_grid(int **grid, int height)
{
	int i, j;

	if (height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * height);

		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
	}
}


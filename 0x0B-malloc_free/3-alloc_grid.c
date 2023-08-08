/**
 * alloc_grid - Returns pointer to 2 dimensional array of integers
 * @width: Given width
 * @height: Given height
 *
 * Return: Pointer 2 dimensional array of integers
*/
int **alloc_grid(int width, int height)
{
	int *elements, *elements_width, *elements_height, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	elements_width = malloc(sizeof(int) * width);
	elements_height = malloc(sizeof(int) * height);

	if (elements_width == NULL || elements_height == NULL)
		return (NULL);

	elements[elements_width][elements_height];

	for (i = 0; i < elements_width; i++)
	{
		for (j = 0; j < elements_height; j++)
			elements[i][j] = 0;
	}

	return (elements);
}


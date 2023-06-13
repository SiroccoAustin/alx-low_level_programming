#include "main.h"

/**
 * alloc_grid - creates a 2d array
 * @width: first arg
 * @height: second arg
 * Return: a 2d array
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i = 0, j = 0;

	ptr = malloc(sizeof(int *) * height);

	if (ptr == NULL)
		return (NULL);

	if (width <= 0 || height <= 0)
		return (NULL);

	while (i < height)
	{
		ptr[i] = malloc(sizeof(int) * width);

		if (ptr[i] == NULL)
		{
			while (i >= 0)
				free(ptr[i--]);
			free(ptr);
			return (NULL);
		}

		while (j < width)
		{
			ptr[i][j] = 0;
			j++;
		}
		i++;
	}
	return (ptr);
}

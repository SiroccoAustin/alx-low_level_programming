#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - return a pointer
 * @width: width of the array
 * @height: height of the array
 * Return: a pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int **ptr;

	int i, j;

	ptr = malloc(sizeof(int *) * height);


	if (ptr == NULL)
	{
	free(ptr);
	return (NULL);
	}
	if (width <= 0 || height <= 0)
	{
	return (NULL);
	}
	else
	{
	for (i = 0; i < height; i++)
	{
	ptr[i] = malloc(sizeof(int *) * width);
	}
	for (i = 0; i < height; i++)
	{
	for (j = 0; j < width; j++)
	{
	ptr[i][j] = 0;
	}
	}
	}
	return (ptr);
}

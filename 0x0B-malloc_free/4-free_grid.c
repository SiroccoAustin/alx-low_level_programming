#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free memory
 * @grid: function to free memory from
 * @height: height of the array
 * Return: freed memory
 */


void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
	free(grid[i]);
	}
	free(grid);
}

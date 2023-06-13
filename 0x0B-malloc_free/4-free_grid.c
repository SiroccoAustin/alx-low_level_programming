#include "main.h"

/**
 * free_grid - free memory
 * @grid: first arg
 * @height: second arg
 * Return: freed memory
 */

void free_grid(int **grid, int height)
{
	while (height-- > 0)
		free(grid[height]);
	free(grid);
}

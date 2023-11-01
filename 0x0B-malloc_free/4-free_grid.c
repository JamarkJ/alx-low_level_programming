#include "main.h"
#include <stdlib.h>

/**
 * free_grid - ...
 * @grid: ...
 * @height: ...
 *
 * Return: ...
 */
int **alloc_grid(int width, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}

#include "main.h"
#include <stdlib.h>
/**
 *free_grid-frees two dimensional greed
 *@grid:grid to be freed
 *@height:of the grid
 *Return:void
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

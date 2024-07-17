#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees a 2 dimensional grid previously created by alloc_grid.
 * @grid: The address of the two dimensional grid.
 * @height: The height of the grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	/* Free each row */
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	/* Free the array of row pointers */

	free(grid);
}

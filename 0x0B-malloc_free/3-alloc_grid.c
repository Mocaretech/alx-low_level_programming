#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: A pointer to the 2-dimensional array of integers, or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

    /* Check if width or height is 0 or negative */
	if (width <= 0 || height <= 0)
		return (NULL);

    /* Allocate memory for the grid (array of pointers to rows) */
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

    /* Allocate memory for each row and initialize elements to 0 */
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
            /* Free previously allocated memory on failure */
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}

        /* Initialize elements of the row to 0 */
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return grid;
}

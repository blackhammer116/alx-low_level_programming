#include "math.h"
#include <stdlib.h>
/**
 * free_grid - free's up space taken by alloc_grid
 * @grid: the array to be passed
 * @height: height of the array
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

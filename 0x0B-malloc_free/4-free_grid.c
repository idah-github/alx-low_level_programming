#include "main.h"
#include <stdlib.h>
/**
*free_grid - frees a 2 dimensional grid previously created
*by your alloc_grid function.
*@grid: grid being freed
*@height: height of the grid
*
*/
void free_grid(int **grid, int height)
{
	int g = 0;

	if (grid == NULL || height == 0)
		return;

	for (; g < height; g++)
	{
		free(grid[g]);

	free(grid);
	}
}

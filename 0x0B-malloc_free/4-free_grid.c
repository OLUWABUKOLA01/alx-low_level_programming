#include "main.h"
/**
 * free_grid - free a 2 dimensional grid previously
 * @grid: memory to free
 * @height: size of array
 *
 */
void free_grid(int **grid, int height)
{
	int n;

	while (n < height)
	{
		free(grid[n]);
		n++;
	}
	free(grid);
}

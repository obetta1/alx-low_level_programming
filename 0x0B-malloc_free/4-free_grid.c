#include "main.h"
/**
 * free_grid -  a function that frees a 2 dimensional
 * grid previously created by your alloc_grid function.
 * @grid: two dimmension array
 * @height: number
 * Return: 2D pointer
 */
void free_grid(int **grid, int height)
{
	int j;

	if (height <= 0)
		return;
	if (grid == NULL)
		return;
	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}

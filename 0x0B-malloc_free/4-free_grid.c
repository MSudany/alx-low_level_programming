#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees 2d grid previously created by alloc_grid
 * @grid: 2d grid
 * @height: grid height
 *
 * Description: frees 2d grid previously created by alloc_grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(*(grid + i));
	free(grid);
}

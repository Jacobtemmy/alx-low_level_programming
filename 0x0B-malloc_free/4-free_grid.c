#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * free_grid - A function that returns a pointer to a 2 dimension array
 * @grid: Array width/row
 * @height: Array height/column
 * Return: An integer value
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

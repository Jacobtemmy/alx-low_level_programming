#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * alloc_grid - A function that returns a pointer to a 2 dimension array
 * @width: Array width/row
 * @height: Array height/column
 * Return: An integer value
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (0);
	}
	p = malloc(height * sizeof(int *));
	if (p == 0)
	{
		return (0);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == 0)
		{
			for (j = 0; j < i; j++)
			{
				free(p[j]);
			}
			free(p);
			return (0);
		}
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}

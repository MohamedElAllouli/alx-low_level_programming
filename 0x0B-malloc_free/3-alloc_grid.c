#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - alloc grid
 * @w: width
 * @h: height
 * Return: table
 */
int **alloc_grid(int w, int h)
{
	int i, j;
	int **gr;

	if (w <= 0 || h <= 0)
		return (NULL);
	gr = (int **)malloc(sizeof(int *) *  h);
	if (gr == NULL)
		return (NULL);
	for (i = 0; i < h; i++)
	{
		gr[i] = (int *)malloc(sizeof(int *) * w);
		if (gr[i] == NULL)
		{
			for (; i > 0; i--)
			{
				free(gr[i]);
			}
			free(gr);
			return (NULL);
		}
	}
	for (i = 0; i < h; i++)
	{
		for (j = 0; j < w; j++)
		{
			gr[i][j] = 0;
		}
	}
	return (gr);
}

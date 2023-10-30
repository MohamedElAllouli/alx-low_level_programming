#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free grid
 * @gr: gride
 * @h: height
 */
void free_grid(int **gr, int h)
{
	int i;

	for (i = 0; i < h; i++)
		free(gr[i]);
	free(gr);
}

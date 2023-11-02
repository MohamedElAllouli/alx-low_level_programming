#include "main.h"
#include <stdlib.h>
/**
 * array_range - array range
 * @min: min number
 * @max: max number
 *
 * Return: arry
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;
	int j = 0;

	if (min > max)
		return (NULL);
	arr = malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		arr[j] = i;
		j++;
	}
	return (arr);
}

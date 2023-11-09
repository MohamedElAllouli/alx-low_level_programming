#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - index of element
 * @a: array
 * @s: size
 * @cmp: function
 * Return: -1 or index
 */
int int_index(int *a, int s; int (*cmp)(int))
{
	int i;

	if (a == NULL || cmp == NULL || s <= 0)
		return (-1);
	for (i = 0; i < s; i++)
	{
		if (cmp(a[i]) != 0)
			return (i);
	}
	return (-1);
}

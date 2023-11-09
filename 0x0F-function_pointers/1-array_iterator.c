#include "function_pointers.h"
#include<stdlib.h>
/**
 * array_iterator - array iterate
 * @a: the array
 * @s: size
 * @ac: action
 */
void array_iterator(int *a, size_t s, void (*ac)(int))
{
	unsigned int i;

	if (a == NULL || ac == NULL)
		return;
	for (i = 0; i < s; i++)
		ac(a[i]);
}

#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - malloc cheked
 * @b: number
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
	{
		exit(89);
	}
	return (a);
}

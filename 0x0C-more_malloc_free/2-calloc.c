#include "main.h"
#include <stdlib.h>
/**
 * _calloc - calloc function
 * @nmemb:number
 * @size: size
 *
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	return (arr);
}

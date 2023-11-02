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
	char  *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
		{
			arr[i] = 0;
		}
		return (arr);
	}
	else
		return (NULL);
}

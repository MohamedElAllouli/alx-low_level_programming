#include "main.h"
#include <stdlib.h>

/**
 * min - min of tow numers
 * @a: first numeb
 * @b. second numebr
 * Return: numebr
 */
unsigned int min(unsigned int a,unsigned int b)
{
	if (a > b)
		return (b);
	else
		return (a);
}

/**
* _realloc - reallocate
* @ptr: pointer
* @old_size: old size
* @new_size:new size
*
* Return: pointer or null
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *arr;
	unsigned int i;

	if (ptr == NULL)
	{
		arr = malloc(new_size);
		return (arr);
	}
	else if (new_size == old_size)
		return (ptr);

	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		arr = malloc(new_size);
		if (arr != NULL)
		{
			for (i = 0; i < min(old_size, new_size); i++)
				*((char *)arr + i) = *((char *)ptr + i);
			free(ptr);
			return (arr);
		}
		else
			return (NULL);
	}
}

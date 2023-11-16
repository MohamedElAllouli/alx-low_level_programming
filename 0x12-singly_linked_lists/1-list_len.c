#include  "lists.h"
#include <stdio.h>
#include<stdlib.h>
/**
 * list_len - count nod of list
 * @h: list
 * Return: size of list
 *
 */
size_t list_len(const list_t *h)
{
	size_t  i = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}

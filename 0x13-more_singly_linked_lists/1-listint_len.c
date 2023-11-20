#include  "lists.h"
#include <stdio.h>
#include<stdlib.h>
/**
 * listint_len - count nod of list
 * @h: list
 * Return: size of list
 *
 */
size_t listint_len(const listint_t *h)
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

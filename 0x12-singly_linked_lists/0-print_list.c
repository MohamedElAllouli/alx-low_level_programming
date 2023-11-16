#include  "lists.h"
#include <stdio.h>
#include<stdlib.h>
/**
 * print_list - printf all nod of list
 * @h: list
 * Return: size of list
 *
 */
size_t print_list(const list_t *h)
{
	size_t  i = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		i++;
		h = h->next;
	}
	return (i);
}

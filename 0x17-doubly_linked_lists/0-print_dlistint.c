#include<stdlib.h>
#include<stdio.h>
#include "lists.h"

/**
 * print_dlistint - print content of doubly list
 * @h: head of list
 * Return: nuber of noeud
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	if (h != NULL)
	{
		while(h)
		{
			printf("%d\n", h->n);
			i++;
			h = h->next;
		}
	}
	return (i);
}

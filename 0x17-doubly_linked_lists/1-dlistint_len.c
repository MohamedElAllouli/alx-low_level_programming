#include<stdlib.h>
#include<stdio.h>
#include "lists.h"

/**
 * dlistint_len - count elements number in the list
 * @h: head of list
 * Return: nuber of noeud
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	if (h != NULL)
	{
		while (h)
		{
			i++;
			h = h->next;
		}
	}
	return (i);
}

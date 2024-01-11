#include<stdlib.h>
#include<stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - add node at a beginning of list
 * @h: head of list
 * @n: number to add
 * @idx: index of insert position
 * Return: head of list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *temp = *h;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*h == NULL || idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while (temp->next != NULL)
	{
		if (i == idx)
		{
			new->next = temp;
			new->prev = temp->prev;
			temp->prev->next = new;
		}
		i++;
		temp = temp->next;
	}
	if (temp->next == NULL && i == idx)
		return (add_dnodeint_end(h, n));
	else if (idx > i)
		return (NULL);
	return (new);
}

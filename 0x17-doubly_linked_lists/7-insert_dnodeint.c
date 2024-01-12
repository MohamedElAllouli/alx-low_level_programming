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
	dlistint_t *new, *next, *tmp;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	if (idx != 0)
	{
		tmp = *h;
		for (i = 0; i < idx - 1 && tmp != NULL; i++)
			tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		next = *h;
		*h = new;
		new->prev = NULL;
	}
	else
	{
		new->prev = tmp;
		next = tmp->next;
		tmp->next = new;
	}
	new->next = next;
	if (new->next != NULL)
		new->next->prev = new;
	return (new);
}

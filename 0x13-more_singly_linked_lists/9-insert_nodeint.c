#include "lists.h"
#include <string.h>
#include<stdlib.h>
/**
 * insert_nodeint_at - add new nod at th head oh list
 * @head: head of list
 * @n: number
 * @idx: index
 * Return: list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *l, *p = NULL;
	unsigned int i = 0;

	l = malloc(sizeof(listint_t));
	if (l == NULL)
		return (NULL);
	l->n = n;
	l->next = NULL;
	p = *head;
	if (idx == 0)
	{
		l->next = p;
		*head = l;
		return (*head);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		if (p == NULL || p->next == NULL)
			return (NULL);

		p = p->next;
	}
	l->next = p->next;
	p->next = l;

	return (*head);
}

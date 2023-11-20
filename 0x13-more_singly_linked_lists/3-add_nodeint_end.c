#include "lists.h"
#include <string.h>
#include<stdlib.h>
/**
 * add_nodeint_end - add new nod at th head oh list
 * @head: head of list
 * @n: number
 * Return: list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *l, *p = NULL;

	l = malloc(sizeof(listint_t));
	if (l == NULL)
		return (NULL);
	l->n = n;
	l->next = NULL;
	if (*head == NULL)
	{
		*head = l;
		return (*head);
	}
	p = *head;
	while (p->next)
	{
		p = p->next;
	}
	p->next = l;
	return (*head);
}

#include "lists.h"
#include<stdlib.h>
/**
 * add_nodeint - add new nod at th head oh list
 * @head: head of list
 * @n: int
 * Return: list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *l = NULL;

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
	l->next = *head;
	*head = l;

	return (*head);
}

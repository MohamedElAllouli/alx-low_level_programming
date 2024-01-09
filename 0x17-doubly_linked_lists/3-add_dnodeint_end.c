#include<stdlib.h>
#include<stdio.h>
#include "lists.h"
/**
 * add_dnodeint_end - add node at a beginning of list
 * @head: head of list
 * @n: number to add
 * Return: head of list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *temp = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new;
	new->prev = temp;
	return (*head);
}

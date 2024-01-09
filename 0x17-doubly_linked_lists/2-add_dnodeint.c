#include<stdlib.h>
#include<stdio.h>
#include "lists.h"
/**
 * add_dnodeint - add node at a beginning of list
 * @h: head of list
 * @n: number to add
 * Return: head of list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *temp = *head;

	new = malloc(sizeof(dlistint_t));
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	else
	{
		new->next = temp;
		temp->prev = new;
		*head = new;
	}
	return (*head);
}

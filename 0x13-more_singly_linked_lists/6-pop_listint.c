#include "lists.h"
#include<stdlib.h>
/**
 * pop_listint - free list of int
 * @head: head of list
 * Return: number
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp = NULL;
	int n;

	if (head == NULL)
		return (0);
	n = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	(*head) = tmp;
	return (n);
}

#include<stdlib.h>
#include<stdio.h>
#include "lists.h"
/**
 * sum_dlistint - sum of list
 * @head: head of list
 * Return: sum of list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t  *temp = head;
	unsigned int i = 0;

	if (head == NULL)
		return (0);

	while (temp)
	{
		i += temp->n;
		temp = temp->next;
	}
	return (i);
}

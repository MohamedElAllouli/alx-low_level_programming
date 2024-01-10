#include<stdlib.h>
#include<stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - get node at index
 * @head: head of list
 * @index: index of the node
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t  *temp = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (temp->next)
	{
		if (i == index)
			return (temp);
		temp = temp->next;
		i++;
	}
	return (NULL);
}

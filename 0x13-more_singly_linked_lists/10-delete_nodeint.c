#include "lists.h"
#include <string.h>
#include<stdlib.h>
/**
 * delete_nodeint_at_index - add new nod at th head oh list
 * @head: head of list
 * @index: index
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *p = NULL;
	unsigned int i = 0;

	p = *head;
	if (index == 0)
	{
		(*head) = (*head)->next;
		free(p);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		if (p == NULL || p->next == NULL)
			return (-1);

		p = p->next;
	}
	tmp = p->next;
	p->next = p->next->next;
	free(tmp);

	return (1);
}

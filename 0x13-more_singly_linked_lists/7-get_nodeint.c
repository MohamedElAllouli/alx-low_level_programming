#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - get node from list
 * @head: head of list
 * @index: index
 * Return: node
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *t = NULL;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	t = head;
	while (t)
	{
		if (i == index)
		{
			return (t);
		}
		t = t->next;
		i++;
	}
	return (NULL);
}

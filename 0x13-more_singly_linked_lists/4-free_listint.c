#include "lists.h"
#include<stdlib.h>
/**
 * free_listint - free list of int
 * @head: head of list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp = NULL;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}

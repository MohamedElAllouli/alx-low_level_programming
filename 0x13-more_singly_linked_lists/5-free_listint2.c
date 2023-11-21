#include "lists.h"
#include<stdlib.h>
/**
 * free_listint2 - free list of int
 * @head: head of list
 * Return: void
 */
void free_listint2(listint_t *head)
{
	listint_t *tmp = NULL;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	head = NULL;
}

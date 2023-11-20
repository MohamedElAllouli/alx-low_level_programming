#include "lists.h"
#include <string.h>
#include<stdlib.h>
/**
 * free_list - add new nod at th head oh list
 * @head: head of list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *tmp = NULL;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;

	}
}

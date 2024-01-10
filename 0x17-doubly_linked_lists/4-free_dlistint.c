#include<stdlib.h>
#include<stdio.h>
#include "lists.h"
/**
 * free_dlistint - free doubly lists
 * @head: head of lists
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t  *temp = NULL;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

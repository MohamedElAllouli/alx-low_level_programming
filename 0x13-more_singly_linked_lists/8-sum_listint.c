#include "lists.h"
#include<stdlib.h>
/**
 * sum_listint - sum of list
 * @head: head of list
 * Return: sum of list
 */
int sum_listint(listint_t *head)
{
	int s = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		s += head->n;
	}
	return (s);
}

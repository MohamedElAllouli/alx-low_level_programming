#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
* checker - helper
* @head: the head
* Return: list
*/

listint_t *checker(listint_t *head)
{
	listint_t *lagging = NULL;
	listint_t *leading = NULL;

	lagging = leading = head;/* A */
	while (lagging)
	{
		lagging = lagging->next;
		leading = leading->next;/* B */
		if (leading && leading->next)
			leading = leading->next;
		else/* C */
			return (NULL);
		if (lagging == leading)/* D */
			return (leading);
	}
	return (NULL);
}

/**
* find_listint_loop - find loops
* @head: the head node
* Return: The address of the node where loop starts or null if none
*/

listint_t *find_listint_loop(listint_t *head)
{
	while (checker(head))
	{
		if (checker(head) == head)
			return (head);
		head = head->next;
	}
	return (NULL);
}

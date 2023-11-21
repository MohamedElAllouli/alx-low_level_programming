#include "lists.h"
#include <stdlib.h>

/**
 * listint_count - Counts the number of unique nodes
 * @head: the head of list
 * Return: size of list - 0.
 */
size_t listint_count(listint_t *head)
{
	listint_t *t, *h;
	size_t n = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	t = head->next;
	h = (head->next)->next;
	while (h)
	{
		if (t == h)
		{
			t = head;
			while (t != h)
			{
				n++;
				t = t->next;
				h = h->next;
			}
			t = t->next;
			while (t != h)
			{
				n++;
				t = t->next;
			}

			return (n);
		}

		t = t->next;
		h = (h->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - Frees a list
 * @h: head of list
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t n, i;

	n = listint_count(*h);

	if (n == 0)
	{
		for (; h != NULL && *h != NULL; n++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}

	else
	{
		for (i = 0; i < n; i++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}

		*h = NULL;
	}

	h = NULL;

	return (n);
}

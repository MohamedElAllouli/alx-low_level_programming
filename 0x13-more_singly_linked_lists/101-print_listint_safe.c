#include "lists.h"
#include <stdio.h>

/**
 * count_listint_len - Counts the number of  nodes
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return:  the list is not looped - 0.
 *
 */
size_t count_listint_len(const listint_t *head)
{
	const listint_t *t, *h;
	size_t n = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	t = head->next;
	h = (head->next)->next;
	while (h)
	{
		if (t == h)
		{
			t = h;
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
 * print_listint_safe - Print list
 * @head: head of the list
 *
 * Return: number of liste
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n, i = 0;

	n = count_listint_len(head);
	if (n == 0)
	{
		for (; head != NULL; n++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (i = 0; i < n; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (n);
}

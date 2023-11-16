#include "lists.h"
#include <string.h>
#include<stdlib.h>
/**
 * add_node - add new nod at th head oh list
 * @head: head of list
 * @str: string
 * Return: list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *l;
	unsigned int i = 0;

	l = malloc(sizeof(list_t));
	while (str[i])
		i++;
	if (l == NULL)
		return (NULL);
	l->str = strdup(str);
	l->len = i;
	l->next = *head;
	*head = l;
	return (*head);
}


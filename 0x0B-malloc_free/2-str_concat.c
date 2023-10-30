#include "main.h"
#include <stdlib.h>
/**
 * str_concat - create a contact char
 *  @s1: firrst string
 *  @s2: second string
 * Return: null or char
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int size = 0;
	int i;
	int j = 0;

	if (s1 == 0 && s2 == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		size++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		size++;
	}
	s = malloc(sizeof(*s) * (size + 1));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		s[j] = s1[i];
		j++;
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		s[j] = s2[i];
		j++;
		i++;
	}
	return (s);
}

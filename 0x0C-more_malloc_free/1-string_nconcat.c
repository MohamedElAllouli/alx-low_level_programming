#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - create a contact char
 *  @s1: firrst string
 *  @s2: second string
 *  @n: alocate
 * Return: null or char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	int size1 = 0;
	unsigned int size2 = 0;
	unsigned int i;
	int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{
		size1++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		size2++;
	}
	if (size2 <= n)
	{
		n = size2;
	}
	s = malloc(sizeof(*s) * (size1 + n  + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		s[j] = s1[i];
		j++;
	}
	for (i = 0; i < n; i++)
	{
		s[j] = s2[i];
		j++;
	}
	s[j] = '\0';
	return (s);
}

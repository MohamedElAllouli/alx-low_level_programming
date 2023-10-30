#include "main.h"
#include <stdlib.h>
/**
 * _strdup- create array with spesific size and spesific char
 *  @c: epecific char
 * Return: null or char
 */
char *_strdup(char *c)
{
	char *s;
	int size = 0;
	int i;

	if (c == 0)
		return (NULL);
	for (i = 0; c[i] != '\0'; i++)
	{
		size++;
	}
	s = malloc(sizeof(*s) * (size + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size + 1; i++)
	{
		s[i] = c[i];
	}
	return (s);
}

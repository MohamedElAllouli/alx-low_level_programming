#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array with spesific size and spesific char
 * @size: size of table
 * @c: epecific char
 * Return: null or char
 */
char *create_array(unsigned int size, char c)
{
	char *s = NULL;
	unsigned int i;

	if (size == 0)
		return (s);
	s = malloc(sizeof(*s) * size);
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}

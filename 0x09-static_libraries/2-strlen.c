#include "main.h"
/**
 * _strlen - lenth of a string
 *
 * @s: string
 *
 * Return: lenth of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

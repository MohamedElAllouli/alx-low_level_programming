#include "main.h"
/**
 * _strcmp- compare tow string
 * @s1: first string
 * @s2: second string
 *
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s2[j] != '\0')
	{
		j++;
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	if (i < j)
	{
		return (-15);
	}
	else if (i == j)
	{
		return (0);
	}
	else
	{
		return (15);
	}
}

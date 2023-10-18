#include "main.h"
/**
 * _strncpy- conatinate tow strings
 * @s1: first string
 * @s2: second string
 * @n: nuber of chars
 *
 * Return: a string
 */
char *_strncpy(char *s1, char *s2, int n)
{
	int i = 0;
	int j = 0;

	while (s2[j] != '\0' && j < n)
	{
		s1[i] = s2[j];
		j++;
		i++;
	}
	while (j < n)
	{
		s1[j] = '\0';
		j++;
	}
	return (s1);
}

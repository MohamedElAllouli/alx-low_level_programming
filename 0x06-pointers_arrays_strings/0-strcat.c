#include "main.h"
/**
 * _strcat - conatinate tow strings
 * @s1: first string
 * @s2: second string
 *
 * Return: a string
 */
char *_strcat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] != '\n')
	{
		i++;
	}
	while (s2[j] != '\n')
	{
		s1[i] = s2[j];
		j++;
		i++;
	}
	s1[i] = '\n';
	return (s1);
}

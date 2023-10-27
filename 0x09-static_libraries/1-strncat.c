#include "main.h"
/**
 * _strncat - conatinate tow strings
 * @s1: first string
 * @s2: second string
 * @n: nuber of chars
 *
 * Return: a string
 */
char *_strncat(char *s1, char *s2, int n)
{
	int i = 0;
	int j = 0;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0' && j < n)
	{
		s1[i] = s2[j];
		j++;
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

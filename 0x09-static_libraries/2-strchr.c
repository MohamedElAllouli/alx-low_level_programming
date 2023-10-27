#include "main.h"
/**
 * _strchr -locate a caracter
 * @s: string
 * @c: char to locate
 * Return: char location
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (0);
}

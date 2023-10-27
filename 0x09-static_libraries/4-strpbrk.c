#include "main.h"
/**
 * _strpbrk - searche a string
 * @s: string source
 * @accept: string
 * Return: a string
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
		}
	return ('\0');
}

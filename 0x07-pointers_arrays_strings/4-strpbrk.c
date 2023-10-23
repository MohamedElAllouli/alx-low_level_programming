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
	int j = 0;

	while (s[j] != '\0')
	{
		for (i = 0; accept[i]; i++)
		{
			if (s[j] == accept[i])
			{
				return (s);
			}
		}
		j++;
		}
	return ('\0');
}

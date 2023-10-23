#include "main.h"
/**
 * _strspn - get lenght of prefix
 * @s: string
 * @accept: sub string
 * Return: nuber of byte
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i ;
	int j = 0;

	while (s[i] != '\0')
	{
		for (i = 0; accept[i]; i++)
		{
			if (s[j] == accept[i])
			{
				n++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (n);
		}
		j++;
	}
	return (n);
}

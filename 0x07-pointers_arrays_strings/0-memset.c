#include "main.h"
/**
 * _memset - fills memory with constante byte
 * @s: string 
 * @: value
 * @n: number of byte
 * Return: poiter of string
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	int d = n;

	while (i < d)
	{
		s[i] = b;
		d--;
		i++;
	}
	return (s);
}

#include "main.h"
/**
 * _memcpy - copie memory area
 * @dest: destination string
 * @src: source string
 * @n: nbyte
 * Return: string dest
 */
char *_memcpy(char *dest, char *src, unsigned
int n)
{
	int i = 0;
	int d = n;

	while (i < d)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	return (dest);
}

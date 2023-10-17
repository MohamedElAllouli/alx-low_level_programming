#include "main.h"
/**
 * _strcpy - copy the string
 * @dest: striong pinted
 * @src: string source
 *
 * Return: pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j+1] = '\0';
	return (dest);
}

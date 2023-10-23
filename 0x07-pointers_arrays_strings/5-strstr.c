#include "main.h"
/**
 * _strstr - locate substring
 * @haystack: state string
 * @needle: string
 * Return: string
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *h != '\0')
		{
			n++;
			h++;
		}
		if (*h == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}

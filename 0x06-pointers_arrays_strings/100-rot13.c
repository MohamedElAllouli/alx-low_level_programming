#include "main.h"
/**
 * rot13 - rot 13
 * @s: string
 * Return: pointer for string
 */
char *rot13(char *s)
{
	int i = 0;
	int j;
	char ro1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefjhijklmnopqrstuvwxyz";
	char ro2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == ro1[j])
			{
				s[i] = ro2[j];
				break;
			}
		}
	}
	return (s);
}


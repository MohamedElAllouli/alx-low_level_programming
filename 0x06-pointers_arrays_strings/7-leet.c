#include "main.h"
/**
 * leet - main function
 *@s: string
 * Return: a pointer of string
 */
char *leet(char *s)
{
	int i;
	int j = 0;
	char l[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	while (s[j] != '\0')
	{
		for (i = 0; i < 9; i++)
		{
			if (s[j] == l[i])
			{
				s[j] = num[i];
			}
		}
		j++;
	}
	return (s);
}

#include "main.h"
/**
 * rev_string - Write a function that prints a string, in reverse
 * @str: string
 *
 */
void rev_string(char *str)
{
	int i = 0;
	int j = 0;
	char c;

	while (str[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= j)
	{
		c = str[i];
		str[i] = str[j];
		str[j] = c;
		i--;
		j++;
	}
}

#include "main.h"
#include <stdlib.h>
/**
 * argstostr - margstostr
 * @ac: size
 * @av: array
 * Return: char
 */
char *argstostr(int ac, char **av)
{
	int i;
	int s;
	int k = 0;
	int j = 0;
	char *S;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (s = 0; av[i][s]; s++)
			j++;
	}
	j += ac;
	S = malloc(sizeof(char) * j + 1);
	if (S == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (s = 0; av[i][s]; s++)
		{
			S[k] = av[i][s];
			k++;
		}
		if (S[k] == '\0')
		{
			S[k++] = '\n';
		}
	}
	return (S);
}

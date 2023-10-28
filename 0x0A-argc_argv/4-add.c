#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - main function
 * @argv: content of commande line
 * @argc: argc
 * Return: 0 olwayse in success
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	int i = 1;
	int j;
	int s = 0;

	for (; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		s = s + atoi(argv[i]);
	}
	printf("%d\n", s);
	return (0);
}

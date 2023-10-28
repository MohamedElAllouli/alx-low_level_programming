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
	int i = 0;
	int j = 0;
	int d;
	int c[] = {25, 10, 5, 2, 1};

	if (argc == 2)
	{
		d = atoi(argv[1]);
		if (d < 0)
		{
			printf("0\n");
		}
		else
		{
			for (; i < 5; i++)
			{
				while (d / c[i] > 0)
				{
					j += d / c[i];
					d = d % c[i];
				}
			}
			printf("%d\n", j);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
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
	int s = 1;

	if (argc > 2)
	{
	for (; i < argc; i++)
	{
		s = s * atoi(argv[i]);
	}
	printf("%d\n", s);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

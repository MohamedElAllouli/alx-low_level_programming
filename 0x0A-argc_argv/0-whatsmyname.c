#include <stdio.h>
#include "main.h"
/**
 * main - main function
 * @argv: content of commande line
 * @argc: argc
 * Return: 0 olwayse in success
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}

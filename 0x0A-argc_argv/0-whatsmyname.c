#include <stdio.h>
#include "main.h"
/**
 * main - main function
 * @argv: content of commande line
 * @argc: argc
 * Return: argc olwayse in success
 */
int main(int argc_attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (argc);
}

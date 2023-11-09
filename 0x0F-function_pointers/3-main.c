#include "3-calc.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * main - main function
 * @argc: arguments
 * @argv: array of parameters
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n1;
	int n2;
	int n;
	int (*res)(int, int);
	char *g_o;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	g_o = argv[2];

	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*g_o == '/' || *g_o == '%') && (*argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}
	res = get_op_func(g_o);
	n = res(n1, n2);
	printf("%d\n", n);
	return (0);
}

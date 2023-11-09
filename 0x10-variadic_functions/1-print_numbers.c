#include <stdarg.h>
#include<stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - print number
 * @n: number of parameters
 * @s: separator
 * Return: void
 */
void print_numbers(const char *s, const unsigned int n, ...)
{
	unsigned int i;
	va_list liste;
	int tmp;
	char *p;

	if (n == 0)
		return;
	if (s == NULL)
		p = "";
	else
		p = (char *) s;
	va_start(liste, n);
	for (i = 0; i < n; i++)
	{
		tmp = va_arg(liste, int);
		printf("%d", tmp);
		if (i != n - 1)
			printf("%s", p);

	}
	va_end(liste);
	printf("\n");
}

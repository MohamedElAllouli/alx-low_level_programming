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

	if (s == NULL || *s == 0)
		p = "";
	else
		p = (char *) s;
	va_start(liste, n);
	if (n > 0)
	{
		tmp = va_arg(liste, int);
		printf("%d", tmp);
	}
	for (i = 1; i < n; i++)
	{
		tmp = va_arg(liste, int);
		printf("%s%d", p, tmp);
	}
	printf("\n");
	va_end(liste);
}

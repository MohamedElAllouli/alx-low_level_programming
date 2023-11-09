#include <stdarg.h>
#include<stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - print string
 * @n: number of parameters
 * @s: separator
 * Return: void
 */
void print_strings(const char *s, const unsigned int n, ...)
{
	unsigned int i;
	va_list liste;
	char *tmp;
	char *p;

	if (s == NULL || *s == 0)
		p = "";
	else
		p = (char *) s;
	va_start(liste, n);
	if (n > 0)
	{
		tmp = va_arg(liste, char *);
		if (tmp == NULL)
			tmp = "(nil)";
		printf("%s", tmp);
	}
	for (i = 1; i < n; i++)
	{
		tmp = va_arg(liste, char *);
		if (tmp == NULL)
			tmp = "(nil)";
		printf("%s%s", p, tmp);
	}
	printf("\n");
	va_end(liste);
}

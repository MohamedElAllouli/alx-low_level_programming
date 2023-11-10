#include <stdarg.h>
#include<stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - print string
 * @f: format
 * Return: void
 */
void print_all(const char * const f, ...)
{
	int i = 0;
	va_list liste;
	char *tmp;
	char *p = "";

	va_start(liste, f);

	if (f)
	{
		while (f[i])
		{
			switch (f[i])
			{
				case 'c':
					printf("%s%c", p, va_arg(liste, int));
					break;
				case 'i':
					printf("%s%d", p, va_arg(liste, int));
					break;
				case 'f':
					printf("%s%f", p, va_arg(liste, double));
					break;
				case 's':
					tmp = va_arg(liste, char *);
					if (tmp == NULL)
						tmp = "(nil)";
					printf("%s%s", p, tmp);
					break;
				default:
					i++;
					continue;
			}
			p = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(liste);
}

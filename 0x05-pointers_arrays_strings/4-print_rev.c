#include "main.h"
/**
 * print_rev - Write a function that prints a string, in reverse
 * @str: string
 *
 */
void print_rev(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;

	}
	while (i >= 0)
	{
		_putchar(str[i]);
		i--;
	}
	_putchar('\n');
}

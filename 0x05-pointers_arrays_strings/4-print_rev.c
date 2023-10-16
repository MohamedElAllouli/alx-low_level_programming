#include "main.h"
/**
 * print_rev - Write a function that prints a string, in reverse, followed by a new line
 * @s: string
 *
 */
void print_rev(char *s)
{
	int  i;

	i = _strlen(s);
	while (i != -1)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}


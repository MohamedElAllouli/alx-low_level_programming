#include "main.h"
/**
 * print_alphabet - all caracter in lower case
 *
 */
void print_alphabet(void)
{
	char c = 'a';

	while(c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}

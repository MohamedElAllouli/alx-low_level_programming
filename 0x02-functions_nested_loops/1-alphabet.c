#include "main.h"
/**
 * print_alphabet - all caracter in lower case
 *
 */
void print_alphabet(void)
{
	char letter = 'a';
	
	while (letter  <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}

#include "main.h"
/**
 * puts2 - every other character of a string
 * @s: string
 *
 */
void puts2(char *s)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		i = i + 1;
	}
	while (j < i)
	{
		_putchar(s[j]);
		j += 2;
	}
	_putchar('\n');
}

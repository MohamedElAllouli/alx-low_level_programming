#include "main.h"
/**
 * puts_half - every other character of a string
 * @s: string
 *
 */
void puts_half(char *s)
{
	int i = 0;
	int j = 0;
	int n;

	while (s[i] != '\0')
	{
		i = i + 1;
	}
	if (i % 2 != 0)
	{
		n = (i - 1) / 2;
		n++;
		for (j = n; j < i; j++)
		{
			_putchar(s[j]);
		}
	}
	else
	{
		n = i / 2;
		for (j = n; j < i; j++)
		{
			_putchar(s[j]);
		}
	}
	_putchar('\n');
}

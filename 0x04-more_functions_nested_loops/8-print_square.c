#include "main.h"
/**
 * print_square - print line
 *@n: nuber of _
 *
 */
void print_square(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

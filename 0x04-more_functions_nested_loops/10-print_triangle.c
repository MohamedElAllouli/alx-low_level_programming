#include "main.h"
/**
 *print_triangle - print triangle
 *@size: nuber of _
 *
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = size; i > 0; i--)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			for (k = 0; k <= (size - j); k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

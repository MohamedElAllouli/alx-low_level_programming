#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - print to 98
 * @n: the start number
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i < 99; i++)
		{
			printf("%d", i);
			if (i < 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
	else
	{
		for (i = n; i > 97; i--)
		{
			printf("%d", i);
			if (i > 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}

#include <stdio.h>
/**
 *öqin -  print nubers conbinition
 *
 *Description: öqin function
 *
 *Return: 0 on success
 */
int main(void)
{
	int i;
	int j;

	for ( i = 48 ; i < 58; i++)
	{
		
		for (j = i+1; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			if (i < 56)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

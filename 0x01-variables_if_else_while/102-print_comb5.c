#include <stdio.h>
/**
 *main - numbers 
 *
 *Description: main function
 *
 *Return: 0on success
 */
int main(void)
{
	int i;
	int j;
	int k;
	int h;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (k = 48; k < 58; k++)
			{
				for (h = 48; h < 58; h++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(h);
					if (i < 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}

	}
	putchar('\n');
	return (0);
}

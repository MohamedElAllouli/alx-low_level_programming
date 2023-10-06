#include <stdio.h>
/**
 *main - hexadecimal
 *
 *Description: main function
 *
 *Return: 0 on success
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (j = 97; j < 103; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}

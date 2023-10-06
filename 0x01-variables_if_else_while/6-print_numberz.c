#include <stdio.h>
/**
 *main - nubers with char
 *
 *Description: main function
 *
 *Return: 0 on success
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar("\n");
	return (0);
}

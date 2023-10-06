#include <stdio.h>
/**
 *main - Nubers with char
 *
 *Description: main function
 *
 *Return: 0 on succsess
 */
int main(void)
{
	int i;
	
	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}
	printf("\n");
	return (0);
}


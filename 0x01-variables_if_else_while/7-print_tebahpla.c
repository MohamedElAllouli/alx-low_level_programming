#include <stdio.h>
/**
 *main - lower char
 *
 *Description: fuction main
 *
 *Return: 0 on success
 */
int main(void)
{
	char alphabet = 'z';

	while (alphabet <= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar("\n");
	return (0);
}


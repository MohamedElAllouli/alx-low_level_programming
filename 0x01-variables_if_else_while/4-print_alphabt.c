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
	char alphabet = 'a';

	while (alphabet <= 'z')
	{ 
		if (alphabet == 'q' || alphabet == 'e')
		{
			alphabet++;
		}
		putchar(alphabet);
		alphabet++;
	}
		printf("\n");
	       	return (0);
}

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
	char alphabet1 = 'A';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	   while (alphabet1 <= 'Z')
	   {
		   putchar(alphabet1);
		   alphabet1++;
								           }
	printf("\n");
	return (0);
}

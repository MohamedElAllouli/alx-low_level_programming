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
	putchar(alphabet);
	alphabet++;
}
printf("\n");
return (0);
}

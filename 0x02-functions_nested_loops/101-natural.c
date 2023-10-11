#include <stdio.h>
/**
 * main - numbers
 *
 * Return: 0 on success
 */
int main(void)
{
	int i;
	int s = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
		s = s + i;
		}
	}
	printf("%d\n", s);
	return (0);
}

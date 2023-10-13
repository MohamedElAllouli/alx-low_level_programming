#include<stdio.h>
/**
 * main - pgcd
 *
 * Return: 0 on success
 */
int main(void)
{
	long n = 612852475143;
	long f = 2;

	while (n > 1)
	{
		if (n % f == 0)
			n = n / f;
		else
			f++;
	}
	printf("%ld\n", f);
	return (0);
}

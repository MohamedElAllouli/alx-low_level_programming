#include "main.h"
/**
 * flip_bits - number of bits to change
 * @n: numbre one
 * @m: number tow
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, cb = 0;
	unsigned long int c;
	unsigned long int e = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		c = e >> i;
		if (c & 1)
			c++;
	}
	return (c);
}



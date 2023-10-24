#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - sum of diagnals
 * @a: arry
 * @size: sif of array
 */
void print_diagsums(int *a, int size)
{
	int i;
	int s1 = 0;
	int s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 = s1 + a[i * size + 1];
	}
	for (i = size - 1; i >= 0; i--)
	{
		s2 = s2 + a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", s1, s2);
}

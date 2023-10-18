#include "main.h"
/**
 * reverse_array - reverse array
 * @a: array
 * @n: size of array
 *
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i <= n / 2; i++)
	{
		tmp = a[n - 1];
		a[n - 1] = a[i];
		a[i] = tmp;
		n--;
	}
}


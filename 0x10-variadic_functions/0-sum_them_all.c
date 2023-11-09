#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum of all parametres
 * @n: number of parameters
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list liste;
	int tmp, sum = 0;

	if (n == 0)
		return (0);
	va_start(liste, n);
	for (i = 0; i < n; i++)
	{
		tmp = va_arg(liste, int);
		sum += tmp;
	}
	return (sum);
}

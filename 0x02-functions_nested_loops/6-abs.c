#include "main.h"
/**
 * _abs - grt absulute value
 * @n: The number
 *
 * Return: absolute value of n
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
	{
		n = n * -1;
		return (n);
	}
}

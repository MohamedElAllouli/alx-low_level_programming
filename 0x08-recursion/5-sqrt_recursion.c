#include "main.h"
/**
 * findsqrt - find sqrt
 * @n: number
 * @i: iterator
 *
 * Return: sqr value
 */
int findsqrt(int n, int i)
{
	if (i * i > n)
	return (-1);
	if (i * i == n)
	return (i);
	return (findsqrt(n, i + 1));
}
/**
 * _sqrt_recursion - sqrt root of number
 * @n: nuber
 * Return: sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (findsqrt(n, 0));
}

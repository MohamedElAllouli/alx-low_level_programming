#include "main.h"
/**
 * prime_number - find prime number
 * @n: number
 * @i: iterator
 * Return: 1 or 0
 */
int prime_number(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime_number(n, i - 1));
}
/**
 * is_prime_number - prime number
 * @n: number
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_number(n, n - 1));
}

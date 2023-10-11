#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @n: The character to print
 *
 * Return: 1 if positve , 0 if null and -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if ( n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

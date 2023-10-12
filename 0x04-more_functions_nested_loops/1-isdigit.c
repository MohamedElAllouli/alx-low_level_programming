#include "main.h"

/**
 * _isdigit -  function that get if the caracter is upper
 *@c: is caracter
 *
 * Return: 1  on success or 0 in otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}

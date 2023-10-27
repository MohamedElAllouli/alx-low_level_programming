#include "main.h"

/**
 * _isupper -  function that get if the caracter is upper
 *@c: is caracter
 *
 * Return: 1  on success or 0 in otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}

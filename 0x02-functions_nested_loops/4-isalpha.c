#include "main.h"
/**
 * _isalpha - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1 or 0 in atherwise
 * 
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

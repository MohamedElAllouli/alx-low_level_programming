#include "main.h"
/**
 * _strlen_recursion - lenth of string
 * @s: string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int n;

	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}

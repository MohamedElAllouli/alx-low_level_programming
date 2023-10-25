#include "main.h"
/**
 * _strlen_recursion - lenth of string
 * @s: string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int n = 0;
	if (*s != '\0')
	{
		n++;
		n = n + _strlen_recursion(s + 1);
	}
	return (n);
}
/**
 * _palindrome - is palindrom
 * @s: string
 * @i: iterator
 * @l: lenght
 * Return: 1 or 0
 */
int _palindrome(char *s, int i, int l)
{
	if (*(s + i) != *(s + l - 1))
		return (0);
	if (i >= l)
		return (1);
	return (_palindrome(s, i + 1, l - 1));
}
/**
 * is_palindrome - is palindrome
 * @s: string
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (_palindrome(s, 0, _strlen_recursion(s)));
}

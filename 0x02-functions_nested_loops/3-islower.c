#include "main.h"
/**
 *_islower - print if lower
 *
 * @c: The character to test
 * Return: On success 1 or 0 in atherwise
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

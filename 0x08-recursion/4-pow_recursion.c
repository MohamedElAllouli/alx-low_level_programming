#include "main.h"
/**
 * _pow_recursion - pow of number
 * @x: number
 * @y: pow
 * Return : pow value
 */
int _pow_recursion(int x, int y)
{
	if (x < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

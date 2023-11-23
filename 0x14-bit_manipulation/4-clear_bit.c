#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - sets  bit to 0 at  index
 * @n: number
 * @index: index
 * Return: 1 on  success, -1 on  error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}

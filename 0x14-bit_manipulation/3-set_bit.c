#include "main.h"
/**
 * set_bit - set value of index to 1.
 * @n: unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 on success, -1 on fail.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num;

	if (index > 63)
		return (-1);

	num = 1 << index;
	*n = (*n | num);
	return (1);
}

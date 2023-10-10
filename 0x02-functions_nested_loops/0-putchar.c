#include "main.h"
/**
 *main - putchar function
 *
 *Return: On success 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
int main(void)
{
	_putchar('_putchar');
	_putchar('\n');
	return (0);
}


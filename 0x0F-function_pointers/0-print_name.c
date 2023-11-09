#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - print name
 * @n: name
 * @f: function
 */
void print_name(char *n, void (*f)(char *))
{
	if (n == NULL)
		return;
	if (f == NULL)
		return;
	f(n);
}

#include "main.h"
/**
 * _atoi - convert string to inteer
 * @s: string
 * Return: integer
 */
int _atoi(char *s)
{
	int i = 0;
	unsigned int n = 0;
	int m = 1;
	int is = 0;

	while (s[i])
	{
		if (s[i] == 45)
		{
			m *= -1;
		}
		while (s[i] >= 48 && s[i] <= 57)
		{
			is = 1;
			n = (n * 10) + (s[i] - '0');
			i++;
		}
		if (is == 1)
		{
			break;
		}
		i++;
	}
	n *= m;
	return (n);
}


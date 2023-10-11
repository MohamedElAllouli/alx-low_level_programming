#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *positive_or_negative - positf or negatif
 *@n: number
 *
 *Discription: main function
 *
 */
void positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if (n == 0)
	{
		printf("%d is zero", n);
	}
	else
	{
		printf("%d is negative", n);
	}
}

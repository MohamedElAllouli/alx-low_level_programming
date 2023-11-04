#include "dog.h"
#include<stdlib.h>
/**
 * init_dog - intialise a dog
 * @d: a structur
 * @n: name of dog
 * @a: age
 * @o: owner
 * Return: void
 */
void init_dog(struct dog *d, char *n, float a, char *o)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
		d->name = n;
		d->age = a;
		d->owner = o;
}

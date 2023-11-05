#include "dog.h"
#include<stdlib.h>
/**
 * new_dog  - create  a dog
 * @d: a structur
 * @n: name of dog
 * @a: age
 * @o: owner
 * Return: void
 */
dog_t *new_dog(char *n, float a, char *o)
{
	dog_t *d;
	d = malloc(sizeof(dog_t));
	if (d != NULL)
	{
		d->name = n;
		d->age = a;
		d->owner = o;
		return (d);
	}
	else
		return (NULL);
}

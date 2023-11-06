#include "dog.h"
#include<stdlib.h>

/**
  * _strlen -length of a string
  * @s: String
  *
  * Return: String
  */
int _strlen(char *s)
{
	int i = 0;

	for (; *s != '\0'; s++)
	{
		i++;
	}

	return (i);
}

/**
  * _strcpy - Copy a string
  * @d: Destination
  * @s: Source
  *
  * Return: a string
  */
char *_strcpy(char *d, char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		d[i] = s[i];
	}

	dest[i++] = '\0';

	return (d);
}
/**
 * new_dog  - create  a dog
 * @n: name of dog
 * @a: age
 * @o: owner
 * Return: void
 */
dog_t *new_dog(char *n, float a, char *o)
{
	dog_t *d;
	int nl = 0, ol = 0;

	if (n != NULL && o != NULL)
	{
		nl = _strlen(n) + 1;
		ol = _strlen(o) + 1;
		d = malloc(sizeof(dog_t));

		if (d == NULL)
			return (NULL);

	d->name = malloc(sizeof(char) * nl);

		if (d->name == NULL)
		{
			free(d);
			return (NULL);
		}

		d->owner = malloc(sizeof(char) * ol);

		if (d->owner == NULL)
		{
			free(d->name);
			free(d);
			return (NULL);
		}

		d->name = _strcpy(d->name, n);
		d->owner = _strcpy(d->owner, o);
		d->age = a;
	}

	return (d);
}

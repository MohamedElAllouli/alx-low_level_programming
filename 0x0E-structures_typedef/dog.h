#ifndef STRUCT_H
#define STRUCT_H


/**
 * struct dog - dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: Dog information
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *, float, char *);
void print_dog(struct dog *d);
#endif

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

/**
 * typedef dog_t - typedef
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *, float, char *);
void print_dog(struct dog *d);
dog_t *new_dog(char *, float, char *);
void free_dog(dog_t *d);
#endif

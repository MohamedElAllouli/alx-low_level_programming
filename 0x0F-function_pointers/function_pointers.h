#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
int _putchar(char c);
void print_name(char *, void (*f)(char *));
void array_iterator(int *, size_t, void (*)(int));
int int_index(int *, int, int (*cmp)(int));

#endif

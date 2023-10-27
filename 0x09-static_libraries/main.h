#ifndef MAIN_H
#define MAIN_H
int _putchar(char c);
int _islower(int);
int _isalpha(int);
int _abs(int);
int _isupper(int);
int _isdigit(int);
int _strlen(char *);
void _puts(char *);
char *_strcpy(char *, char *);
int _atoi(char *);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
#endif

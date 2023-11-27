#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - reads text from file and printed
 * @filename: file name
 * @letters: letters size
 * Return: number of letters  read and printed, 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f, lettre, n;
	char *t;

	t = malloc(letters);
	if (t == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
	{
		free(t);
		return (0);
	}
	lettre = read(f, t, letters);
	n = write(STDOUT_FILENO, t, lettre);
	close(f);
	return (n);
}

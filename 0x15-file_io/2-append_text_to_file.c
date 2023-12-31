#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * append_text_to_file - add text at the end of file
 * @filename: file name
 * @text_content: file content
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0, f;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[i] != '\0')
	{
		i++;
	}
	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);
	write(f, text_content, i);
	return (1);
}

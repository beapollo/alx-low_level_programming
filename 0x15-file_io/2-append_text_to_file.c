#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: the name of the file
 * @text_content: content to be added
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int append_file, i = 0;

	if (filename == NULL)
		return (-1);
	append_file = open(filename, O_WRONLY | O_APPEND);
	if (append_file == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	while (text_content[i])
		i++;
	write(append_file, text_content, i);
	return (1);
}

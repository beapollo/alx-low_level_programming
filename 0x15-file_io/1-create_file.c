#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: the name of the file to create
 * @text_content: contents of the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int i = 0, f_desc;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";


	while (text_content[i] != '\0')
	{
		i++;
	}

	f_desc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (f_desc == -1)
		return (-1);

	write(f_desc, text_content, i);

	return (1);
}

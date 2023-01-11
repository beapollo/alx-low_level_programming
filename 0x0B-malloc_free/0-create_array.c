#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creats an array of characters
 * @size: the length of the array
 * @c: input character
 * Return: array initialized with specific char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
	{
		s = NULL;
	}
	else
	{
		s = (char *)malloc(size * sizeof(char));
		if (s == NULL)
			return (NULL);
		for (i = 0; i < size; i++)
		{
			s[i] = c;
		}
	}
	return (s);
}

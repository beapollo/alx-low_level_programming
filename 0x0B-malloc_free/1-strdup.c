#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a duplicated string of str
 * @str: input string
 * Return: pointer of thestring
 */
char *_strdup(char *str)
{
	int i = 0, size;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		while (*(str + i))
		{
			i++;
		}
		size = i + 1;
		s = (char *)malloc(size * sizeof(char));
		if (s == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < size; i++)
			{
				s[i] = str[i];
			}
			s[i + 1] = '\0';
		}
	}
	return (s);
}

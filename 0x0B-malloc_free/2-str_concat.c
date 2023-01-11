#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer of the concatnated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = 0;
	while (*(s1 + i))
	{
		i++;
	}
	j = 0;
	while (*(s2 + j))
	{
		j++;
	}
	s = (char *)malloc((i + j + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			s[i] = s1[i];
		}
		for (j = 0; s2[j] != '\0'; j++)
		{
			s[i] = s2[j];
			i++;
		}
	}
	return (s);
}

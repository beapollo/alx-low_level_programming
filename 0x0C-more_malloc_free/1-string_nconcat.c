#include "main.h"

/**
 * string_nconcat - conctenates two strings
 * @s1: first string
 * @s2: second string
 * @n: the first bytes of s2
 * Return: a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, l1 = 0, size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + l1))
		l1++;
	size = (l1 + n) * sizeof(*s);
	s = malloc(size + 1);

	if (s == NULL)
		return (NULL);
	while (i < size && s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}
	while (i < size && s2[j] != '\0')
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	s[i] = '\0';
	return (s);
}

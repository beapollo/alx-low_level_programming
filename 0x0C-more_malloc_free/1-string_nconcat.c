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
	unsigned int i = 0, l1 = 0, l2 = 0, buffer;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + l1))
		l1++;
	while (*(s2 + l2))
		l2++;
	if (l2 > n)
                l2 = n;
        else
                n = l2;
	buffer = l1 + l2 + 1;
	s = malloc(sizeof(char) * buffer);
	if (s == NULL)
		return (NULL);
	while (i < buffer - 1)
	{
		if (i < l1)
			s[i] = s1[i];
		else
			s[i] = s2[i - l1];
		i++;
	}
	s[buffer] = '\0';
	return (s);
}

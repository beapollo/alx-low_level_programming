#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to integer
 * @s: pointer of a string
 *
 * Return: int
 */
int _atoi(char *s)
{
	int i, j, n, sign;

	i = n = 0;
	sign = 1;

	while ((*(s + i) != '\0') && (*(s + i) < '0' || *(s + i) > '9'))
	{
		if (*(s + i) == '-')
		{
			sign *= -1;
		}
		i++;
	}
	j = i;

	while (*(s + j) >= '0' && *(s + j) <= '9')
	{
		n = 10 * n + sign * (*(s + j) - '0');
		j++;
	}

	return (n);
}

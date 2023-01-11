#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - concatenates all argument of main program
 * @ac: argument counter
 * @av: argument vector.
 * Return: Always 0
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0, k = 0;
	char *newStr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		for (j = 0; *(*(av + i) + j); j++)
			len++;
	len += ac;
	newStr = malloc(sizeof(char) * len + 1);
	if (newStr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++)
		{
			*(newStr + k) = *(*(av + i) + j);
			k++;
		}
		*(newStr + k) = '\n';
		k++;
	}
	*(newStr + k) = '\0';
	return (newStr);
}

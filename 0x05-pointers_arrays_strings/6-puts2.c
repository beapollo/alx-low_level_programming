#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a  string to stdout
 * @str: string to print
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0, len = 0;
	char *p;

	p = str;
	while (*p)
	{
		len++;
		p++;
	}
	while (*(str + i))
	{
		if (i < len)
		{
			printf("%c", *(str + i));
		}
		i = i + 2;
	}
	printf("\n");
}

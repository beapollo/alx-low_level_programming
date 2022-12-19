#include "main.h"
#include <stdio.h>
/**
 * print_rev - entry point
 *
 * Description: prints a string in reverse
 * @s: parameter that points to address of a string
 * Return: nothing
 */

void print_rev(char *s)
{
	int i = 0, counter = 0;
	char *p;

	if (*s != '\0')
	{
		p = s;
		while (*p != '\0')
		{
			i = counter;
			counter++;
			p++;
		}
		while (i >= 0)
		{
			printf("%c", *(s + i));
			i--;
		}
	}
	printf("\n");
}

#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints every other character of a string
 * @str: string to print
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0, len = 0;

	while (*str != '\0')
	{
		 len++;
		 str++;
	}
	while (*(str + i))
	{
		printf("%c", *(str + i));
		i = i + 2;
	}
	printf("\n");
}

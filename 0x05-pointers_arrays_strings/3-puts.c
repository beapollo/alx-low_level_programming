#include "main.h"
#include <stdio.h>
/**
 * _puts - entry point
 *
 * Description: prints a string
 * @str: parameter that points to address of a string
 * Return: nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		printf("%c", *str);
		str++;
	}
	printf("\n");
}

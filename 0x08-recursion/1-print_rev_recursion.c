#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - prints a string followed by a new line
 * @s: string to print
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		printf("%c", *s);
	}
}

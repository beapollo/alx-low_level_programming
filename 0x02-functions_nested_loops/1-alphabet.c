#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints the english alphabet a-z
 *
 * Return: Nothing.
 *
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

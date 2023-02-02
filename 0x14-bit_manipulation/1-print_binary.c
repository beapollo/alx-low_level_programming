#include <stdio.h>
#include "main.h"
/**
 * _start_from_MSB - recursion function to convert MSB first
 * @d: a decimal number
 */
void _start_from_MSB(unsigned long int d)
{
	if (d == 0)
		return;
	_start_from_MSB(d >> 1);
	_putchar((d & 1) + '0');
}
/**
 * print_binary - converts a number to binary
 * @n: a decimal number to be converted
 * Return: the binary number otherwise 0
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		_start_from_MSB(n);
}

#include "main.h"
/**
 * print_sign - tests whether a number is +/-/0
 * @n: number to test
 * Return: 1 if it is is positive -1 if negative otherwise 0
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

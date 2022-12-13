#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: number to test
 * Return: last digit of n
 *
 */
int print_last_digit(int n)
{
	int l = n % 10;

	if (l < 0)
	{
		l *= -1;
	}
	_putchar(l + '0');
	return (l);
}

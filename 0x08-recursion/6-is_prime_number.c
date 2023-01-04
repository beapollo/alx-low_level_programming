#include "main.h"
#include <stdio.h>
/**
 * prime_check - checks to see if prime number
 * @i: factor check
 * @p: possible prime number
 *
 * Return: 1 if prime
 */
int prime_check(int p, int i)
{
	if (p < 2)
		return (0);
	else if (p % i == 0)
		return (0);
	else if (i * i > p)
		return (1);
	else
		return (prime_check(p, i + 1));
}
/**
 * is_prime_number - prints 1 a prime number
 * @n: a number to check prime number
 *
 * Return: 1 if prime number
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_check(n, 2));
}

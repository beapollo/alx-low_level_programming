#include "variadic_functions.h"
/**
 * sum_them_all - function that sum of all its parameters
 * @n: number of variables will be inserted in the function
 *
 * Return: the sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(ap, int);
	}

	va_end(ap);
	return (sum);
}

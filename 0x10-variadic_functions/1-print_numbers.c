#include "variadic_functions.h"
/**
 * print_numbers - print all numbers.
 * @separator: separator between numbers
 * @n: the number of parameters
 * Description: this function prints all the parameters)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, unsigned int));
		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(num);
	printf("\n");
}

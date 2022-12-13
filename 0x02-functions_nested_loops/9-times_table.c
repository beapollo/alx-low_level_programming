#include "main.h"
/**
 * times_table - prints the 9 times table
 * @n, m: number to test
 * Return: Nothing
 *
 */
void times_table(void)
{
	int n, m, r;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			r = n * m;
			if (r <= 9)
			{
				if (m != 0)
				{
					_putchar(' ');
				}
				_putchar(r + '0');
				if (m != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
				if (m != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}

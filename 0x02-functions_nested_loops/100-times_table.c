#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints the less than 15 times table
 * @n: int type number for test
 * @r result of i * j
 * Return: Nothing
 *
 */
void print_times_table(int n)
{
	int i, j, r;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				r = i * j;
				if (j != 0)
				{
					if (r < 10)
					{
						printf("  ");
					}
					else if (r < 100)
					{
						printf(" ");
					}
				}
				printf("%d", r);
				if (j != n)
				{
					printf(", ");
				}

			}
			printf("\n");
		}
	}
}

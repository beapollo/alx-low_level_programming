#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 *
 */
int main(void)
{
	int ch1;
	int ch0;

	for (ch1 = '0'; ch1 <= '9'; ch1++)
	{
		for (ch0 = '0'; ch0 <= '9'; ch0++)
		{
			if (ch1 != ch0 && ch1 < ch0)
			{
				putchar(ch1);
				putchar(ch0);
				if (ch1 == '8' && ch0 == '9')
				{
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

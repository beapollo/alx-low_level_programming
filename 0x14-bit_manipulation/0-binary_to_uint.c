#include "main.h"

/**
 * binary_to_uint - converts a binary number into an unsigned int
 * @b: type const char pointer of one bit
 *
 * Return: converted number, or 0 if one or more char in str b that is not 0/1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int p;
	unsigned int i = 0;
	unsigned int d = 0;
	unsigned int len = 0;
	unsigned int t = 1;

	if (b == NULL)
		return (0);
	while (*(b + len))
		len++;
	while (*(b + i))
	{
		if (*(b + i) != '1' && *(b + i) != '0')
			return (0);
		if (*(b + i) == '1')
		{
			p = len - i - 1;
			while (p)
			{
				t *= 2;
				p--;
			}
			d += t;
			t = 1;
		}
		i++;
	}
	return (d);
}

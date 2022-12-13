#include <stdio.h>
/**
 * main - This print all multiples of 5 and 3 of 1024
 * Return: Always 0
 */
int main(void)
{
	long int x = 1, y = 2, z = 0, sum = 2;

	while (z <= 4000000)
	{
		z = x + y;
		x = y;
		y = z;
		if (z % 2 == 0)
			sum += z;
	}
	printf("%lu\n", sum);
	return (0);
}

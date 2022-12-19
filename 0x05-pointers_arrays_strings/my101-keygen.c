#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - random password generator for 101-crackme
 *
 * Return: always 0
 */
int main(void)
{
	int i = 0;
	int randomizer = 0;
	char numbers[] = "0123456789";
	char symbols[] = " !""'@#$%^&*()+,-./:;<=>?[]_`{|}~";
	char lowercase[] = "abcdefghijklmnoqprstuvwyz";
	char uppercase[] = "ABCDEFGHIJKLMNOQPRSTUYWVZ";
	char password[58];

	srand(time(NULL));
	randomizer = rand() % 4;
	while (i < 58)
	{
		if (randomizer == 1)
		{
			password[i] = numbers[rand() % 10];
			randomizer = rand() % 4;
		}
		else if (randomizer == 2)
		{
			password[i] = symbols[rand() % 8];
			randomizer = rand() % 4;
		}
		else if (randomizer == 3)
		{
			password[i] = lowercase[rand() % 26];
			randomizer = rand() % 4;
		}
		else
		{
			password[i] = uppercase[rand() % 26];
			randomizer = rand() % 4;
		}
		i++;
	}
	password[i] = '\0';
	printf("%s", password);
	return (0);
}

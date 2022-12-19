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
	// Initialize counter
	int i = 0;

	int randomizer = 0;

	// Seed the random-number generator
	// with current time so that the
	// numbers will be different every time
	srand(time(NULL));

	// Array of numbers
	char numbers[] = "0123456789";

	// Array of all the special symbols
	char symbols[] = "!@#$^&*?";

	// Array of small alphabets
	char letter[] = "abcdefghijklmnoqprstuvwyzx";

	// Array of capital alphabets
	char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";

	// Stores the random password
	char password[N];

	// To select the randomizer
	// inside the loop
	randomizer = rand() % 4;

	// Iterate over the range [0, N]
	for (i = 0; i < N; i++)
	{
		if (randomizer == 1)
		{
			password[i] = numbers[rand() % 10];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 2)
		{
			password[i] = symbols[rand() % 8];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 3)
		{
			password[i] = LETTER[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else
		{
			password[i] = letter[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
	}
	retrun (0);
}

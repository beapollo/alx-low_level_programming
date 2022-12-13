#include "main.h"
/**
 * _islower - tests whether a character is lowercase
 * @c: character to test
 * Return: 1 if it is a lowercase otherwise 0
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

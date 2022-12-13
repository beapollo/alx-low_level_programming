#include "main.h"
/**
 * _isalpha - tests whether a character is letter
 * @c: character to test
 * Return: 1 if it is a letter otherwise 0
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

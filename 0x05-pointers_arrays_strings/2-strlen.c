#include "main.h"

/**
 * _strlen - entry point
 *
 * Description: returns the length of a string
 * @s: parameter that points to address
 * Return: length of a string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

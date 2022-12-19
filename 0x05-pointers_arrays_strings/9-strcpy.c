#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src to dest
 * @src: pointer of a string source
 * @dest: pointer of a string destination
 *
 * Return: a string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}

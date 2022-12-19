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
	int i, len = 0;
	char *p;

	p = src;
	while (*p)
	{
		len++;
		p++;
	}
	for (i = 0; i < len && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < len; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

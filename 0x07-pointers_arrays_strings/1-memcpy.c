#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @src: source memory area to be copied
 * @dest: destination memory area to copy on
 * @n: number of spaces to copy
 *
 * Return: pointer to memory area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}

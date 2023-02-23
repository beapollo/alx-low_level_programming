#include <stdlib.h>
/**
 * _calloc - Allocate memory for array
 * @nmemb: Number of elements
 * @size: Size in bytes of elements
 *
 * Return: Pointer to new memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	while (i < nmemb * size)
	{
		arr[i] = 0;
		i++;
	}
	return (arr);
}

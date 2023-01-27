#include <stdio.h>
#include "lists.h"

/**
 * list_len - prints the number of elements of a list_t list
 * @h: linked list to be printed
 * Return: the number of elements
 *
 */

size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		h = h->next;
		a++;
	}
	return (a);
}

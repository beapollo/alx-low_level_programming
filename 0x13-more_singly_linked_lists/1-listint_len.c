#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - prints the number of elements of a listint_t list
 * @h: linked list
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t a = 0;

	while (h)
	{
		h = h->next;
		a++;
	}
	return (a);
}

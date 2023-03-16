#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - finds the number of elements in a linked list
 * @h: linked list to be printed
 * Return: the number of nodes
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t a = 0;

	while (h)
	{
		h = h->next;
		a++;
	}
	return (a);
}

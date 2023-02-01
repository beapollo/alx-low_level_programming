#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints the number of elements of a listint_t list
 * @h: linked list to be printed
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t a = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		a++;
	}
	return (a);
}

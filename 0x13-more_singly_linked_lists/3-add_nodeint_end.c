#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: last node
 * @n: new node data
 * Return: pointer to node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *a, *last;

	if (!head)
		return (0);
	a = malloc(sizeof(listint_t));
	if (!a)
		return (0);
	a->n = n;
	a->next = 0;
	last = *head;
	if (!last)
	{
		*head = a;
		return (a);
	}
	while (last->next)
		last = last->next;
	last->next = a;
	return (a);
}

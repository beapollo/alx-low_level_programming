#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: first node
 * @n: new node data
 * Return: pointer to node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *a;

	if (!head)
		return (0);
	a = malloc(sizeof(listint_t));
	if (!a)
		return (0);
	a->n = n;
	a->next = *head;
	*head = a;
	return (a);
}

#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a list_t list
 * @head: pointer to the first node
 * @n: an element to be added
 * Return: the address of the new element, otherwise NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_head, *last_node;

	new_head = malloc(sizeof(dlistint_t));

	if (new_head == NULL)
		return (NULL);

	new_head->n = n;

	if (*head == NULL)
	{
		*head = new_head;
	}
	else
	{
		last_node = *head;
		while(last_node && last_node->next)
			last_node = last_node->next;
		last_node->next = new_head;
		new_head->prev = last_node;
	}
	return (new_head);
}

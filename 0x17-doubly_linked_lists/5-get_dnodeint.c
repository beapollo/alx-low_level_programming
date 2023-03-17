#include "lists.h"
/**
 * get_dnodeint_at_index - function with two arguments
 * @head: head pointer to linked list
 * @index: nth node to get node
 *
 * Description: returns the nth node of a doubly linked list
 * Return: nth node or NULL if fail
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	while (counter < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		counter++;
	}
	return (head);
}

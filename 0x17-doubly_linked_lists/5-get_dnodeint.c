#include "lists.h"

/**
 * get_dnodeint_at_index - function to get nth node
 * @head: pointer to linked list
 *
 * Description: returns the nth node
 * Return: nth node otherwise NULL
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

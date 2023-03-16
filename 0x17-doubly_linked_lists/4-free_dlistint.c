#include "lists.h"

/**
 * free_dListint - free a dlistint_t list.
 * @head: pointer to list head.
 */
void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		free_dlistint(head->next);
		free(head);
	}
}

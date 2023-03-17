#include "lists.h"
/**
 * free_dListint - free a dlistint_t list.
 * @head: pointer to list head.
 * Description: free linked list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *cursor = head;

	while (head)
	{
		head = head->next;
		free(cursor);
		cursor = head;
	}
}

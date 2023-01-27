#include <stdlib.h>
#include "lists.h"

/**
 * free_list - a function that frees a list
 * @head: pointer to list_t
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head)
	{
		current = head->next;
		free(head->str);
		free(head);
		head = current;
	}
}

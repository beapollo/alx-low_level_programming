#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the first node
 * @str: char pointer for data to be added
 * Return: the address of the new element, otherwise NULL
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *new_head;

	new_head = malloc(sizeof(list_t *));

	if (new_head == NULL)
	{
		return (NULL);
	}
	new_head->next = *head;
	*head = new_head;
	new_head->str = strdup(str);
	if (!new_head->str)
	{
		free(new_head);
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}
	new_head->len = i;
	return (new_head);
}

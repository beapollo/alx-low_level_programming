#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the first node
 * @str: char pointer for data to be added
 * Return: the address of the new element, otherwise NULL
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current;
	list_t *new_node;
	char *dupstr;
	int i = 0, len;

	if (str == NULL)
		return (NULL);
	while (*(str + i))
		i++;
	len = i + 1;
	i = 0;

	dupstr = malloc(sizeof(char) * len);
	if (dupstr == NULL)
		return (NULL);
	while (*(str + i))
	{
		dupstr[i] = str[i];
		i++;
	}
	dupstr[i] = '\0';

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = dupstr;
	new_node->len = len - 1;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = new_node;
	return (*head);
}

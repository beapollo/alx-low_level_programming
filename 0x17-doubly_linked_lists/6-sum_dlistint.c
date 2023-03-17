#include "lists.h"
/**
 * sum_dlistint - sum of the data
 * @head: head pointer to linked list
 *
 * Description: returns the sum
 * Return: sum of the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

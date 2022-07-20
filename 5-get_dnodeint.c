#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node of a
 * dlistint_t linked list
 * @head: pointer
 * @index: index of the node
 * Return: index of the linked list or NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;

	if (head == NULL)
		return (NULL);
	pos = 0;
	while (head != NULL)
	{
		if (pos == index)
			return (head);
		pos++;
		head = head->next;
	}
	return (head);
}

#include "lists.h"

/**
 * get_nodeint_at_index - return the nth node of a linkedlist
 * @head: a pointer to head
 * @index: index to get
 * Return: nth node if found else NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);
	while (head != NULL)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}

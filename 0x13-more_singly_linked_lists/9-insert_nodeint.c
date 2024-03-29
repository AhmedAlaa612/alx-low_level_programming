#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a given index
 * @head: a pointer to the head
 * @idx: index to insert at
 * @n: value of the node
 * Return: a pointer to the new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (!head || !new_node)
		return (NULL);
	if (*head == NULL && idx == 0)
	{
		new_node->n = n;
		new_node->next = NULL;
		return (new_node);
	}
	while (*head != NULL)
	{
		if (i == idx - 1)
		{
			new_node->next = (*head)->next;
			new_node->n = n;
			(*head)->next = new_node;
			return (new_node);
		}
		i++;
		*head = (*head)->next; 
	}
	return (NULL);
}

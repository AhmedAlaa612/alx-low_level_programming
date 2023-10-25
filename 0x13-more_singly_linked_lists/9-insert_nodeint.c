#include "lists.h"

/**
 * insert_node_at_index - inserts a node at a given index
 * @head: a pointer to the head
 * @idx: index to insert at
 * @n: value of the node
 * Return: a pointer to the new node or NULL
 */

listint_t *insert_node_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *temp;
	unsigned int i = 0;

	if (!head || !new_node)
		return (NULL);
	if (*head == NULL)
	{
		temp = (*head)->next;
		new_node->n = temp->n;
		new_node->next = temp;
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

#include "lists.h"
/**
 * free_list - free all nodes of a list
 * @head: pointer to head
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *node, *next_node;

	if (!head)
		return;
	node = head;
	while (node)
	{
		next_node = node->next;
		free(node->str);
		free(node);
		node = next_node;
	}
}

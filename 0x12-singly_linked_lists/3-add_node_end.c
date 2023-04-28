#include "lists.h"
/**
 * add_node_end - adds a node in the end of the list
 * @head: da head
 * @str: a string
 * Return: pointer to the node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
	list_t *new_node = malloc(sizeof(list_t));

	if (!head || !new_node)
		return (0);
	if (str)
	{
		new_node->str = strdup(str);
		if (!new_node->str)
		{
			free(new_node);
			return (NULL);
		}
		while (str[len] != '\0')
			len++;
		new_node->len = len;
	}
	if (*head)
	{
		while (*head->next)
			*head = *head->next;
		*head->next = new_node;
	}
	else
		*head = new_node;
	new_node->next = NULL;
	return (new_node);
}

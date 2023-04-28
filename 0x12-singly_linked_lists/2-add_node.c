#include "lists.h"
/**
 * add_node - adds a node to the start of the list
 * @head: pointer to head
 * @str: str of a node
 * Return: adress of new node
 */
list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	list_t *new_head = malloc(sizeof(list_t));

	if (!head || !new_head)
		return (NULL);
	if (str)
	{
		new_head->str = strdup(str);
		if (!new_head->str)
		{
			free(new_head);
			return (NULL);
		}
		while (str[len] != '\0')
			len++;
		new_head->len = len;
	}
	new_head->next = *head;
	*head = new_head;
	return (new_head);
}

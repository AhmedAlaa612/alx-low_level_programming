#inlcude "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: pointer to first element
 * @index: index
 * Return: 1 if success else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	if (!head)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		return (1);
	}
	while (*head != NULL)
	{
		if (i == index - 1)
		{
			temp = *head;
			if ((*head)->next == null)
				return (-1);
			temp->next = temp->next->next;
			return (1);
		}
		i++;
		*head = (*head)->next;
	}
	return (-1);
}

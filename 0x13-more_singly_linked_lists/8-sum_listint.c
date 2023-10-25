#include "lists.h"

/**
 * sum_listint - return the sum of all the data in the linkedlist
 * @head: a pointer to the head
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head !=  NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

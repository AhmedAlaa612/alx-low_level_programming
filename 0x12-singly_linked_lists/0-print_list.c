#include "lists.h"
/**
 * _strlen - return len of string
 * @s: the string
 * Return: int
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s[i] != '\0')
		i++;
	return (i);
}
/**
 * print_list - print a linked list
 * @h: pointer to head
 * Return: size of the list
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}

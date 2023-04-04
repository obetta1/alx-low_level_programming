#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns the
 * nth node of a listint_t linked list.
 * @head: list pointer
 * @index: the index of the node, starting at 0
 * Return: if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *result = malloc(sizeof(listint_t));

	if (result == NULL)
		return (NULL);
	result = head;
	while (head)
	{
		if (count == index)
			return (result);
		result = result->next;
		count++;
	}
	return (NULL);
}

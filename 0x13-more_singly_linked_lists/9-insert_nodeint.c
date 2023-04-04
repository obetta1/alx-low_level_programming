#include "lists.h"
/**
 * insert_nodeint_at_index - a function that inserts a
 * new node at a given position.
 * @head: list pointer
 * @idx: the index of the list where the new node should be added.
 * @n: number to insert
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *current_node = *head;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (current_node)
	{
		if (count == idx)
		{
			current_node->n = n;
			new_node = current_node;
		}
		current_node = current_node->next;
		count++;
	}
	if (current_node == NULL)
	{
		free (new_node);
		return (new_node);
	}
	return  (new_node);
}

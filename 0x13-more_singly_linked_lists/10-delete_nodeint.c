#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node
 * at index index of a listint_t linked list.
 * @head: list pointer
 * @index: the index of the list where the node should be deleted.
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 1;
	listint_t *current_node = *head;

	if (index == 0)
	{
		current_node = *head;
		*head = (*head)->next;
		free(current_node);
		return (-1);
	}
	if (head == NULL || *head == NULL)
		return (-1);
	current_node = *head;
	while (current_node)
	{
		if (count == index)
			current_node->next = current_node->next->next;
		current_node = current_node->next;
		count++;
	}
	if (current_node == NULL || current_node->next == NULL)
		return (-1);
	return  (1);
}

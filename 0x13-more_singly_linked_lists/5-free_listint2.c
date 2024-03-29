#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list.
 * @head: pointer to the node
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *new_node;

	while (head)
	{
		new_node = (*head)->next;
		free (*head);
		*head = new_node;
	}
}

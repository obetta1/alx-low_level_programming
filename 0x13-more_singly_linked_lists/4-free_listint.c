#include "lists.h"
/**
 * free_listint - function that frees a listint_t list.
 * @head: pointer to the node
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	while (head)
	{
		new_node = head;
		head = head->next;
		free (new_node);
	}
}

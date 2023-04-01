#include "lists.h"
/**
 * free_list - function that frees a list_t list.
 * @head: list pointer
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *current_node = head;

	while (current_node != NULL)
	{
		list_t *next  = current_node->next;

		free(current_node);
		current_node = next;
	}
}

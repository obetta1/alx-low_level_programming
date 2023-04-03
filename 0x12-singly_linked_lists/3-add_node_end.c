#include "lists.h"
#include <string.h>
/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: list pointer
 * @str: string
 * Return: elements
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);
	new_node->str = strdup(str);
	new_node->next = NULL;
	new_node->len = strlen(str);
	if (*head == NULL)
		*head = new_node;

	else
	{
		list_t *current_node = *head;

		while (current_node->next)
			current_node = current_node->next;
		current_node->next = new_node;
	}
	return (new_node);
}

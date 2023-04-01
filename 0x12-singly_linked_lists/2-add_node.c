#include "lists.h"
#include <string.h>
/**
 * add_node - function that adds a new node at the
 * beginning of a list_t list.
 * @head: list pointer
 * @str: string
 * Return: elements
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *res = malloc(sizeof(list_t));

	res->str = strdup(tr);
	res->next = &**head;
	return (res);
}

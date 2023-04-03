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

	if(!res)
		return (NULL);
	res->str = strdup(str);
	res->len = strlen(str);
	res->next = &**head;
	*head = res;
	return (res);
}

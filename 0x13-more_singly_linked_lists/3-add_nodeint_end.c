#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end of a
 * listint_t list.
 * @head: pointer to the node
 * @n: value of node
 * Return: a pointerto the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		listint_t *cur_node = *head;

		while (cur_node->next)
			cur_node = cur_node->next;
		cur_node->next = new_node;
	}
	return (new_node);
}
